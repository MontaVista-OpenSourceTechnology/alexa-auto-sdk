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

#ifndef MESSAGING_SENDMESSAGEFAILEDMESSAGE_H
#define MESSAGING_SENDMESSAGEFAILEDMESSAGE_H

#include <string>
#include <vector>

#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>
#include "AASB/Message/Messaging/Messaging/ErrorCode.h"

namespace aasb {
namespace message {
namespace messaging {
namespace messaging {

//Class Definition
struct SendMessageFailedMessage {
    struct Header {
        struct MessageDescription {
            static const std::string& topic() {
                static std::string topic = "Messaging";
                return topic;
            }
            static const std::string& action() {
                static std::string action = "SendMessageFailed";
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
        using ErrorCode = ::aasb::message::messaging::ErrorCode;

        std::string token;
        ErrorCode code;
        std::string message = "";
    };
    static const std::string& topic() {
        static std::string topic = "Messaging";
        return topic;
    }
    static const std::string& action() {
        static std::string action = "SendMessageFailed";
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
inline void to_json(nlohmann::json& j, const SendMessageFailedMessage::Payload& c) {
    j = nlohmann::json{
        {"token", c.token},
        {"code", c.code},
        {"message", c.message},
    };
}
inline void from_json(const nlohmann::json& j, SendMessageFailedMessage::Payload& c) {
    j.at("token").get_to(c.token);
    j.at("code").get_to(c.code);
    if (j.contains("message")) {
        j.at("message").get_to(c.message);
    }
}

inline void to_json(nlohmann::json& j, const SendMessageFailedMessage::Header::MessageDescription& c) {
    j = nlohmann::json{
        {"topic", c.topic()},
        {"action", c.action()},
    };
}
inline void from_json(const nlohmann::json& j, SendMessageFailedMessage::Header::MessageDescription& c) {
}

inline void to_json(nlohmann::json& j, const SendMessageFailedMessage::Header& c) {
    j = nlohmann::json{
        {"version", c.version()},
        {"messageType", c.messageType()},
        {"id", c.id},
        {"messageDescription", c.messageDescription},
    };
}
inline void from_json(const nlohmann::json& j, SendMessageFailedMessage::Header& c) {
    j.at("id").get_to(c.id);
    j.at("messageDescription").get_to(c.messageDescription);
}

inline void to_json(nlohmann::json& j, const SendMessageFailedMessage& c) {
    j = nlohmann::json{
        {"header", c.header},
        {"payload", c.payload},
    };
}
inline void from_json(const nlohmann::json& j, SendMessageFailedMessage& c) {
    j.at("header").get_to(c.header);
    j.at("payload").get_to(c.payload);
}

inline std::string SendMessageFailedMessage::toString() const {
    nlohmann::json j = *this;
    return j.dump(3);
}

}  // namespace messaging
}  // namespace messaging
}  // namespace message
}  // namespace aasb

#endif  // MESSAGING_SENDMESSAGEFAILEDMESSAGE_H
