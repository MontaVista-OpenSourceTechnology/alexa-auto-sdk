/*
 * Copyright 2017-2021 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/*********************************************************
**********************************************************
**********************************************************

THIS FILE IS AUTOGENERATED. DO NOT EDIT

**********************************************************
**********************************************************
*********************************************************/

#ifndef ALEXASPEAKER_SPEAKERSETTINGSCHANGEDMESSAGE_H
#define ALEXASPEAKER_SPEAKERSETTINGSCHANGEDMESSAGE_H

#include <string>
#include <vector>

#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>
#include "AASB/Message/Alexa/AlexaSpeaker/SpeakerType.h"

namespace aasb {
namespace message {
namespace alexa {
namespace alexaSpeaker {

//Class Definition
struct SpeakerSettingsChangedMessage {
    struct Header {
        struct MessageDescription {
            static const std::string& topic() {
                static std::string topic = "AlexaSpeaker";
                return topic;
            }
            static const std::string& action() {
                static std::string action = "SpeakerSettingsChanged";
                return action;
            }
        };
        static const std::string& version() {
            static std::string version = "3.2";
            return version;
        }
        static const std::string& messageType() {
            static std::string messageType = "Publish";
            return messageType;
        }
        std::string id = aace::engine::utils::uuid::generateUUID();
        MessageDescription messageDescription;
    };
    struct Payload {
        using SpeakerType = ::aasb::message::alexa::SpeakerType;

        SpeakerType type;
        bool local;
        int volume;
        bool mute;
    };
    static const std::string& topic() {
        static std::string topic = "AlexaSpeaker";
        return topic;
    }
    static const std::string& action() {
        static std::string action = "SpeakerSettingsChanged";
        return action;
    }
    static const std::string& version() {
        static std::string version = "3.2";
        return version;
    }
    static const std::string& messageType() {
        static std::string messageType = "Publish";
        return messageType;
    }
    std::string toString() const;
    Header header;
    Payload payload;
};

//JSON Serialization
inline void to_json(nlohmann::json& j, const SpeakerSettingsChangedMessage::Payload& c) {
    j = nlohmann::json{
        {"type", c.type},
        {"local", c.local},
        {"volume", c.volume},
        {"mute", c.mute},
    };
}
inline void from_json(const nlohmann::json& j, SpeakerSettingsChangedMessage::Payload& c) {
    j.at("type").get_to(c.type);
    j.at("local").get_to(c.local);
    j.at("volume").get_to(c.volume);
    j.at("mute").get_to(c.mute);
}

inline void to_json(nlohmann::json& j, const SpeakerSettingsChangedMessage::Header::MessageDescription& c) {
    j = nlohmann::json{
        {"topic", c.topic()},
        {"action", c.action()},
    };
}
inline void from_json(const nlohmann::json& j, SpeakerSettingsChangedMessage::Header::MessageDescription& c) {
}

inline void to_json(nlohmann::json& j, const SpeakerSettingsChangedMessage::Header& c) {
    j = nlohmann::json{
        {"version", c.version()},
        {"messageType", c.messageType()},
        {"id", c.id},
        {"messageDescription", c.messageDescription},
    };
}
inline void from_json(const nlohmann::json& j, SpeakerSettingsChangedMessage::Header& c) {
    j.at("id").get_to(c.id);
    j.at("messageDescription").get_to(c.messageDescription);
}

inline void to_json(nlohmann::json& j, const SpeakerSettingsChangedMessage& c) {
    j = nlohmann::json{
        {"header", c.header},
        {"payload", c.payload},
    };
}
inline void from_json(const nlohmann::json& j, SpeakerSettingsChangedMessage& c) {
    j.at("header").get_to(c.header);
    j.at("payload").get_to(c.payload);
}

inline std::string SpeakerSettingsChangedMessage::toString() const {
    nlohmann::json j = *this;
    return j.dump(3);
}

}  // namespace alexaSpeaker
}  // namespace alexa
}  // namespace message
}  // namespace aasb

#endif  // ALEXASPEAKER_SPEAKERSETTINGSCHANGEDMESSAGE_H
