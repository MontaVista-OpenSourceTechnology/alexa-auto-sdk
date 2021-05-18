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

#ifndef EXTERNALMEDIAADAPTER_LOGINMESSAGE_H
#define EXTERNALMEDIAADAPTER_LOGINMESSAGE_H

#include <string>
#include <vector>

#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>

namespace aasb {
namespace message {
namespace alexa {
namespace externalMediaAdapter {

//Class Definition
struct LoginMessage {
    struct Header {
        struct MessageDescription {
            static const std::string& topic() {
                static std::string topic = "ExternalMediaAdapter";
                return topic;
            }
            static const std::string& action() {
                static std::string action = "Login";
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
        std::string localPlayerId;
        std::string accessToken;
        std::string userName;
        bool forceLogin;
        int tokenRefreshInterval;
    };
    static const std::string& topic() {
        static std::string topic = "ExternalMediaAdapter";
        return topic;
    }
    static const std::string& action() {
        static std::string action = "Login";
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
inline void to_json(nlohmann::json& j, const LoginMessage::Payload& c) {
    j = nlohmann::json{
        {"localPlayerId", c.localPlayerId},
        {"accessToken", c.accessToken},
        {"userName", c.userName},
        {"forceLogin", c.forceLogin},
        {"tokenRefreshInterval", c.tokenRefreshInterval},
    };
}
inline void from_json(const nlohmann::json& j, LoginMessage::Payload& c) {
    j.at("localPlayerId").get_to(c.localPlayerId);
    j.at("accessToken").get_to(c.accessToken);
    j.at("userName").get_to(c.userName);
    j.at("forceLogin").get_to(c.forceLogin);
    j.at("tokenRefreshInterval").get_to(c.tokenRefreshInterval);
}

inline void to_json(nlohmann::json& j, const LoginMessage::Header::MessageDescription& c) {
    j = nlohmann::json{
        {"topic", c.topic()},
        {"action", c.action()},
    };
}
inline void from_json(const nlohmann::json& j, LoginMessage::Header::MessageDescription& c) {
}

inline void to_json(nlohmann::json& j, const LoginMessage::Header& c) {
    j = nlohmann::json{
        {"version", c.version()},
        {"messageType", c.messageType()},
        {"id", c.id},
        {"messageDescription", c.messageDescription},
    };
}
inline void from_json(const nlohmann::json& j, LoginMessage::Header& c) {
    j.at("id").get_to(c.id);
    j.at("messageDescription").get_to(c.messageDescription);
}

inline void to_json(nlohmann::json& j, const LoginMessage& c) {
    j = nlohmann::json{
        {"header", c.header},
        {"payload", c.payload},
    };
}
inline void from_json(const nlohmann::json& j, LoginMessage& c) {
    j.at("header").get_to(c.header);
    j.at("payload").get_to(c.payload);
}

inline std::string LoginMessage::toString() const {
    nlohmann::json j = *this;
    return j.dump(3);
}

}  // namespace externalMediaAdapter
}  // namespace alexa
}  // namespace message
}  // namespace aasb

#endif  // EXTERNALMEDIAADAPTER_LOGINMESSAGE_H
