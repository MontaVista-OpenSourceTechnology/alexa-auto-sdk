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

#ifndef CARCONTROL_ADJUSTMODECONTROLLERVALUEMESSAGE_H
#define CARCONTROL_ADJUSTMODECONTROLLERVALUEMESSAGE_H

#include <string>
#include <vector>

#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>

namespace aasb {
namespace message {
namespace carControl {
namespace carControl {

//Class Definition
struct AdjustModeControllerValueMessage {
    struct Header {
        struct MessageDescription {
            static const std::string& topic() {
                static std::string topic = "CarControl";
                return topic;
            }
            static const std::string& action() {
                static std::string action = "AdjustControllerValue";
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
        static const std::string& controllerType() {
            static std::string controllerType = "MODE";
            return controllerType;
        }
        std::string endpointId;
        std::string controllerId;
        int delta;
    };
    static const std::string& topic() {
        static std::string topic = "CarControl";
        return topic;
    }
    static const std::string& action() {
        static std::string action = "AdjustControllerValue";
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
    static const std::string& controllerType() {
        static std::string controllerType = "MODE";
        return controllerType;
    }
    std::string toString() const;
    Header header;
    Payload payload;
};

//JSON Serialization
inline void to_json(nlohmann::json& j, const AdjustModeControllerValueMessage::Payload& c) {
    j = nlohmann::json{
        {"controllerType", c.controllerType()},
        {"endpointId", c.endpointId},
        {"controllerId", c.controllerId},
        {"delta", c.delta},
    };
}
inline void from_json(const nlohmann::json& j, AdjustModeControllerValueMessage::Payload& c) {
    j.at("endpointId").get_to(c.endpointId);
    j.at("controllerId").get_to(c.controllerId);
    j.at("delta").get_to(c.delta);
}

inline void to_json(nlohmann::json& j, const AdjustModeControllerValueMessage::Header::MessageDescription& c) {
    j = nlohmann::json{
        {"topic", c.topic()},
        {"action", c.action()},
    };
}
inline void from_json(const nlohmann::json& j, AdjustModeControllerValueMessage::Header::MessageDescription& c) {
}

inline void to_json(nlohmann::json& j, const AdjustModeControllerValueMessage::Header& c) {
    j = nlohmann::json{
        {"version", c.version()},
        {"messageType", c.messageType()},
        {"id", c.id},
        {"messageDescription", c.messageDescription},
    };
}
inline void from_json(const nlohmann::json& j, AdjustModeControllerValueMessage::Header& c) {
    j.at("id").get_to(c.id);
    j.at("messageDescription").get_to(c.messageDescription);
}

inline void to_json(nlohmann::json& j, const AdjustModeControllerValueMessage& c) {
    j = nlohmann::json{
        {"header", c.header},
        {"payload", c.payload},
    };
}
inline void from_json(const nlohmann::json& j, AdjustModeControllerValueMessage& c) {
    j.at("header").get_to(c.header);
    j.at("payload").get_to(c.payload);
}

inline std::string AdjustModeControllerValueMessage::toString() const {
    nlohmann::json j = *this;
    return j.dump(3);
}

}  // namespace carControl
}  // namespace carControl
}  // namespace message
}  // namespace aasb

#endif  // CARCONTROL_ADJUSTMODECONTROLLERVALUEMESSAGE_H
