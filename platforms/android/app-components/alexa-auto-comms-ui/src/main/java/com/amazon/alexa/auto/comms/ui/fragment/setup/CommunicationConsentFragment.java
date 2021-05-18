package com.amazon.alexa.auto.comms.ui.fragment.setup;

import android.os.Bundle;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.annotation.VisibleForTesting;
import androidx.fragment.app.Fragment;
import androidx.lifecycle.LiveData;
import androidx.lifecycle.ViewModelProvider;

import com.amazon.alexa.auto.comms.ui.Constants;
import com.amazon.alexa.auto.comms.ui.R;
import com.amazon.alexa.auto.comms.ui.db.BTDevice;
import com.amazon.alexa.auto.comms.ui.db.BTDeviceRepository;
import com.amazon.alexa.auto.comms.ui.db.ConnectedBTDevice;
import com.amazon.alexa.auto.comms.ui.db.ConnectedBTDeviceRepository;

import java.util.List;

/**
 * Fragment for displaying Communications consent screen.
 */
public class CommunicationConsentFragment extends Fragment {
    private static final String TAG = CommunicationConsentFragment.class.getSimpleName();

    private CommunicationConsentViewModel mViewModel;

    /**
     * Constructs an instance of CommunicationsFragment.
     */
    public CommunicationConsentFragment() {}

    /**
     * Constructs an instance of CommunicationsFragment.
     *
     * @param viewModel View Model for Communications consent.
     */
    @VisibleForTesting
    CommunicationConsentFragment(@NonNull CommunicationConsentViewModel viewModel) {
        this.mViewModel = viewModel;
    }

    @Override
    public void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        if (mViewModel == null) { // It would be non-null for test injected dependencies.
            mViewModel = new ViewModelProvider(this).get(CommunicationConsentViewModel.class);
        }
    }

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        return inflater.inflate(R.layout.communication_setup_fragment, container, false);
    }

    @Override
    public void onViewCreated(@NonNull View view, @Nullable Bundle savedInstanceState) {
        super.onViewCreated(view, savedInstanceState);
    }

    @Override
    public void onActivityCreated(Bundle savedInstanceState) {
        super.onActivityCreated(savedInstanceState);

        requireView();

        observePrimaryConnectedDevice();
    }

    /**
     * Observe primary connected device, which we use for calling and handling messages.
     */
    private void observePrimaryConnectedDevice() {
        LiveData<List<ConnectedBTDevice>> listData =
                ConnectedBTDeviceRepository.getInstance(getContext()).getConnectedDevices();
        listData.observe(getViewLifecycleOwner(), listObserver -> {
            if (listData.getValue() != null && listData.getValue().size() > 0) {
                // Per Android telephony, it uses last paired bluetooth device for calling and handle messages.
                String deviceAddress = listData.getValue().get(listData.getValue().size() - 1).getDeviceAddress();
                Log.d(TAG, "Primary device is found.");
                observeContactUploadPermission(deviceAddress);
            } else {
                Log.d(TAG, "There is no connected device found.");
            }
        });
    }

    /**
     * Observe contact upload consent, if user consents to upload contacts, we will automatically upload contacts with
     * the synced phone book. If not, we display the consent screen again to ask for the permission.
     * @param deviceAddress bluetooth device address.
     */
    private void observeContactUploadPermission(String deviceAddress) {
        LiveData<BTDevice> device = BTDeviceRepository.getInstance(getContext()).getBTDeviceByAddress(deviceAddress);
        device.observe(getViewLifecycleOwner(), observer -> {
            if (device.getValue() != null) {
                if (device.getValue().getContactsUploadPermission().equals(Constants.CONTACTS_PERMISSION_YES)) {
                    Log.d(TAG, "Device's contacts upload permission is YES, uploading contacts.");
                    mViewModel.uploadContacts(deviceAddress);
                } else {
                    View fragmentView = requireView();
                    TextView consentPermissionBody = fragmentView.findViewById(R.id.contacts_permission_consent_body);
                    String format = getResources().getString(R.string.contacts_permission_consent_body);
                    String bodyString = String.format(format, device.getValue().getDeviceName());
                    consentPermissionBody.setText(bodyString);
                    Log.d(TAG, "Device's contacts upload permission is NO, showing contacts consent card.");

                    TextView getYesButtonText = fragmentView.findViewById(R.id.yes_action_button);
                    getYesButtonText.setOnClickListener(view
                            -> mViewModel.setContactsUploadPermission(
                                    device.getValue().getDeviceAddress(), Constants.CONTACTS_PERMISSION_YES));

                    TextView getSkipButtonText = fragmentView.findViewById(R.id.skip_action_button);
                    getSkipButtonText.setOnClickListener(view
                            -> mViewModel.setContactsUploadPermission(
                                    device.getValue().getDeviceAddress(), Constants.CONTACTS_PERMISSION_NO));
                }
            } else {
                Log.d(TAG, "Connected device is not found");
            }
        });
    }
}
