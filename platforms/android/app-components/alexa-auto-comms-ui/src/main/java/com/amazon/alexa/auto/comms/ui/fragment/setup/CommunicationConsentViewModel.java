package com.amazon.alexa.auto.comms.ui.fragment.setup;

import android.app.Application;
import android.os.Handler;
import android.os.Looper;

import androidx.annotation.NonNull;
import androidx.lifecycle.AndroidViewModel;

import com.amazon.alexa.auto.apis.app.AlexaApp;
import com.amazon.alexa.auto.apis.communication.ContactsController;
import com.amazon.alexa.auto.comms.ui.Constants;
import com.amazon.alexa.auto.setup.workflow.WorkflowMessage;

import org.greenrobot.eventbus.EventBus;

/**
 * ViewModel for @{link CommunicationsFragment}
 */
public class CommunicationConsentViewModel extends AndroidViewModel {
    private static final String TAG = CommunicationConsentViewModel.class.getSimpleName();

    private final Handler mHandler;
    private final AlexaApp mApp;
    /**
     * Constructor for CommunicationsViewModel
     *
     * @param application Application object from where the view model will
     *                    fetch dependencies.
     */
    public CommunicationConsentViewModel(@NonNull Application application) {
        super(application);

        mHandler = new Handler(Looper.getMainLooper());
        mApp = AlexaApp.from(application);
    }

    /**
     * Set contacts upload permission, when permission is set, we send workflow event of consent step finish.
     * @param deviceAddress bluetooth device address.
     * @param permission contact upload permission.
     */
    public void setContactsUploadPermission(String deviceAddress, String permission) {
        mApp.getRootComponent().getComponent(ContactsController.class).ifPresent(contactsController -> {
            contactsController.setContactsUploadPermission(deviceAddress, permission);
            if (permission.equals(Constants.CONTACTS_PERMISSION_YES)) {
                uploadContacts(deviceAddress);
            }

            mHandler.post(new Runnable() {
                @Override
                public void run() {
                    EventBus.getDefault().post(new WorkflowMessage("Contacts_Consent_Setup_Finished"));
                }
            });
        });
    }

    /**
     * Upload contacts with device address.
     * @param deviceAddress bluetooth device address.
     */
    public void uploadContacts(String deviceAddress) {
        mApp.getRootComponent().getComponent(ContactsController.class).ifPresent(contactsController -> {
            contactsController.uploadContacts(deviceAddress);
        });
    }

    /**
     * Remove contacts with device id.
     * @param deviceAddress bluetooth device address.
     */
    public void removeContacts(String deviceAddress) {
        mApp.getRootComponent().getComponent(ContactsController.class).ifPresent(contactsController -> {
            contactsController.removeContacts(deviceAddress);
        });
    }
}
