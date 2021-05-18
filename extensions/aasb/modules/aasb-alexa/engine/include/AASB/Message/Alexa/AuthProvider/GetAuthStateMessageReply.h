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

#ifndef AUTHPROVIDER_GETAUTHSTATEMESSAGEREPLY_H
#define AUTHPROVIDER_GETAUTHSTATEMESSAGEREPLY_H

#include <string>
#include <vector>

#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>
#include "AASB/Message/Alexa/AlexaClient/AuthState.h"

namespace aasb {
namespace message {
namespace alexa {
namespace authProvider {

//Class Definition
struct GetAuthStateMessageReply {
    struct Header {
        struct MessageDescription {
            static const std::string& topic() {
                static std::string topic = "AuthProvider";
                return topic;
            }
            static const std::string& action() {
                static std::string action = "GetAuthState";
                return action;
            }
            std::string replyToId;
        };
        static const std::string& version() {
            static std::string version = "3.2";
            return version;
        }
        static const std::string& messageType() {
            static std::string messageType = "Reply";
            return messageType;
        }
        std::string id = aace::engine::utils::uuid::generateUUID();
        MessageDescription messageDescription;
    };
    struct Payload {
        using AuthState = ::aasb::message::alexa::AuthState;

        AuthState state;
    };
    static const std::string& topic() {
        static std::string topic = "AuthProvider";
        return topic;
    }
    static const std::string& action() {
        static std::string action = "GetAuthState";
        return action;
    }
    static const std::string& version() {
        static std::string version = "3.2";
        return version;
    }
    static const std::string& messageType() {
        static std::string messageType = "Reply";
        return messageType;
    }
    std::string toString() const;
    Header header;
    Payload payload;
};

//JSON Serialization
inline void to_json(nlohmann::json& j, const GetAuthStateMessageReply::Payload& c) {
    j = nlohmann::json{
        {"state", c.state},
    };
}
inline void from_json(const nlohmann::json& j, GetAuthStateMessageReply::Payload& c) {
    j.at("state").get_to(c.state);
}

inline void to_json(nlohmann::json& j, const GetAuthStateMessageReply::Header::MessageDescription& c) {
    j = nlohmann::json{
        {"topic", c.topic()},
        {"action", c.action()},
        {"replyToId", c.replyToId},
    };
}
inline void from_json(const nlohmann::json& j, GetAuthStateMessageReply::Header::MessageDescription& c) {
    j.at("replyToId").get_to(c.replyToId);
}

inline void to_json(nlohmann::json& j, const GetAuthStateMessageReply::Header& c) {
    j = nlohmann::json{
        {"version", c.version()},
        {"messageType", c.messageType()},
        {"id", c.id},
        {"messageDescription", c.messageDescription},
    };
}
inline void from_json(const nlohmann::json& j, GetAuthStateMessageReply::Header& c) {
    j.at("id").get_to(c.id);
    j.at("messageDescription").get_to(c.messageDescription);
}

inline void to_json(nlohmann::json& j, const GetAuthStateMessageReply& c) {
    j = nlohmann::json{
        {"header", c.header},
        {"payload", c.payload},
    };
}
inline void from_json(const nlohmann::json& j, GetAuthStateMessageReply& c) {
    j.at("header").get_to(c.header);
    j.at("payload").get_to(c.payload);
}

inline std::string GetAuthStateMessageReply::toString() const {
    nlohmann::json j = *this;
    return j.dump(3);
}

}  // namespace authProvider
}  // namespace alexa
}  // namespace message
}  // namespace aasb

#endif  // AUTHPROVIDER_GETAUTHSTATEMESSAGEREPLY_H
