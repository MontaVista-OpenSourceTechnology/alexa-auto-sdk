# - Find avs libraries
#
#  AVS_INCLUDE_DIRS - Where to find AVS SDK includes, etc.
#  AVS_LIBRARIES    - List of libraries when using AVS SDK.
#
# Important Notes:
# 1. Add extra libraries here as they become available in the AVS Device SDK
# 2. A copy of this file also needs to be available in WakeWordEngines...
#    cp AutoCoreEngineSDK/cmake/FindAVS.cmake WakeWordEngines/cmake
# 3. Update AVS_VERSION when upgrading to a new version

set(AVS_VERSION 1.22)

find_path(AVS_COMMON_INCLUDE_DIR AVSCommon)

set(AVS_INCLUDE_DIRS
    ${AVS_COMMON_INCLUDE_DIR}
    ${AVS_COMMON_INCLUDE_DIR}/../avs_shared
)

find_library(AVS_ACL_LIBRARY ACL)
find_library(AVS_ADSL_LIBRARY ADSL)
find_library(AVS_AFML_LIBRARY AFML)
find_library(AVS_ALEXA_LIBRARY Alexa)
find_library(AVS_AIP_LIBRARY AIP)
find_library(AVS_ALERTS_LIBRARY acsdkAlerts)
find_library(AVS_API_GATEWAY_LIBRARY ApiGateway)
find_library(AVS_AUDIO_PLAYER_LIBRARY acsdkAudioPlayer)
find_library(AVS_AUDIO_RESOURCES_LIBRARY AudioResources)
find_library(AVS_AVS_COMMON_LIBRARY AVSCommon)
find_library(AVS_AVS_GATEWAY_MANAGER_LIBRARY AVSGatewayManager)
find_library(AVS_AVS_SYSTEM_LIBRARY AVSSystem)
find_library(AVS_BLUETOOTH_LIBRARY acsdkBluetooth)
find_library(AVS_CAPABILITIES_DELEGATE_LIBRARY CapabilitiesDelegate)
find_library(AVS_CBL_AUTH_DELEGATE_LIBRARY CBLAuthDelegate)
find_library(AVS_CERTIFIED_SENDER_LIBRARY CertifiedSender)
find_library(AVS_CONTEXT_MANAGER_LIBRARY ContextManager)
find_library(AVS_DEVICE_SETUP_LIBRARY DeviceSetupCA)
find_library(AVS_DEVICE_SETTINGS_LIBRARY DeviceSettings)
find_library(AVS_DO_NOT_DISTURB_CA_LIBRARY acsdkDoNotDisturb)
find_library(AVS_ENDPOINTS_LIBRARY Endpoints)
find_library(AVS_EQUALIZER_LIBRARY acsdkEqualizer)
find_library(AVS_EQUALIZER_IMPLEMENTATIONS_LIBRARY acsdkEqualizerImplementations)
find_library(AVS_INTERACTION_MODEL_LIBRARY InteractionModel)
find_library(AVS_INTERRUPT_MODEL_LIBRARY InterruptModel)
find_library(AVS_MRM_LIBRARY acsdkMultiRoomMusic)
find_library(AVS_NOTIFICATIONS_LIBRARY acsdkNotifications)
find_library(AVS_OPUS_ENCODER_CONTEXT_LIBRARY OpusEncoderContext)
find_library(AVS_PLAYBACK_CONTROLLER_LIBRARY PlaybackController)
find_library(AVS_PLAYLIST_PARSER_LIBRARY PlaylistParser)
find_library(AVS_REGISTRATION_MANAGER_LIBRARY RegistrationManager)
find_library(AVS_SPEAKER_MANAGER_LIBRARY SpeakerManager)
find_library(AVS_SPEECH_ENCODER_LIBRARY SpeechEncoder)
find_library(AVS_SPEECH_SYNTHESIZER_LIBRARY SpeechSynthesizer)
find_library(AVS_SQLITE_STORAGE_LIBRARY SQLiteStorage)
find_library(AVS_SYNCHRONIZE_STATE_SENDER_LIBRARY SynchronizeStateSender)
find_library(AVS_TEMPLATE_RUNTIME_LIBRARY TemplateRuntime)
find_library(AVS_METRICS_LIBRARY MetricRecorder)
find_library(AVS_METRICS_UPL_LIBRARY UplCalculator)
find_library(AVS_SHUTDOWN_MANAGER_LIBRARY acsdkShutdownManager)

set(AVS_LIBRARIES
    ${AVS_ACL_LIBRARY}
    ${AVS_ADSL_LIBRARY}
    ${AVS_AFML_LIBRARY}
    ${AVS_ALEXA_LIBRARY}
    ${AVS_AIP_LIBRARY}
    ${AVS_ALERTS_LIBRARY}
    ${AVS_API_GATEWAY_LIBRARY}
    ${AVS_AUDIO_PLAYER_LIBRARY}
    ${AVS_AUDIO_RESOURCES_LIBRARY}
    ${AVS_AVS_COMMON_LIBRARY}
    ${AVS_AVS_GATEWAY_MANAGER_LIBRARY}
    ${AVS_AVS_SYSTEM_LIBRARY}
    ${AVS_BLUETOOTH_LIBRARY}
    ${AVS_CAPABILITIES_DELEGATE_LIBRARY}
    ${AVS_CBL_AUTH_DELEGATE_LIBRARY}
    ${AVS_CERTIFIED_SENDER_LIBRARY}
    ${AVS_CONTEXT_MANAGER_LIBRARY}
    ${AVS_DEVICE_SETUP_LIBRARY}
    ${AVS_DEVICE_SETTINGS_LIBRARY}
    ${AVS_DO_NOT_DISTURB_CA_LIBRARY}
    ${AVS_ENDPOINTS_LIBRARY}
    ${AVS_EQUALIZER_LIBRARY}
    ${AVS_EQUALIZER_IMPLEMENTATIONS_LIBRARY}
    ${AVS_INTERACTION_MODEL_LIBRARY}
    ${AVS_INTERRUPT_MODEL_LIBRARY}
    ${AVS_MRM_LIBRARY}
    ${AVS_NOTIFICATIONS_LIBRARY}
    ${AVS_OPUS_ENCODER_CONTEXT_LIBRARY}
    ${AVS_PLAYBACK_CONTROLLER_LIBRARY}
    ${AVS_PLAYLIST_PARSER_LIBRARY}
    ${AVS_REGISTRATION_MANAGER_LIBRARY}
    ${AVS_SPEAKER_MANAGER_LIBRARY}
    ${AVS_SPEECH_ENCODER_LIBRARY}
    ${AVS_SPEECH_SYNTHESIZER_LIBRARY}
    ${AVS_SQLITE_STORAGE_LIBRARY}
    ${AVS_SYNCHRONIZE_STATE_SENDER_LIBRARY}
    ${AVS_TEMPLATE_RUNTIME_LIBRARY}
    ${AVS_METRICS_LIBRARY}
    ${AVS_METRICS_UPL_LIBRARY}
    ${AVS_SHUTDOWN_MANAGER_LIBRARY}
)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(AVS
    REQUIRED_VARS AVS_LIBRARIES AVS_INCLUDE_DIRS
    VERSION_VAR AVS_VERSION
)
