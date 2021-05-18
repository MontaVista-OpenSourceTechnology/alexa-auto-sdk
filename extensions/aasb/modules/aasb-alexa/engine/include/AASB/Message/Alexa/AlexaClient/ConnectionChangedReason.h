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

#ifndef ALEXACLIENT_CONNECTIONCHANGEDREASON_H
#define ALEXACLIENT_CONNECTIONCHANGEDREASON_H

#include <string>
#include <vector>

#include <unordered_map>
#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>

namespace aasb {
namespace message {
namespace alexa {

//Enum Definition
enum class ConnectionChangedReason {
    NONE,
    SUCCESS,
    UNRECOVERABLE_ERROR,
    ACL_CLIENT_REQUEST,
    ACL_DISABLED,
    DNS_TIMEDOUT,
    CONNECTION_TIMEDOUT,
    CONNECTION_THROTTLED,
    INVALID_AUTH,
    PING_TIMEDOUT,
    WRITE_TIMEDOUT,
    READ_TIMEDOUT,
    FAILURE_PROTOCOL_ERROR,
    INTERNAL_ERROR,
    SERVER_INTERNAL_ERROR,
    SERVER_SIDE_DISCONNECT,
    SERVER_ENDPOINT_CHANGED,
};

inline std::string toString(ConnectionChangedReason enumValue) {
    switch (enumValue) {
        case (ConnectionChangedReason::NONE):
            return "NONE";
        case (ConnectionChangedReason::SUCCESS):
            return "SUCCESS";
        case (ConnectionChangedReason::UNRECOVERABLE_ERROR):
            return "UNRECOVERABLE_ERROR";
        case (ConnectionChangedReason::ACL_CLIENT_REQUEST):
            return "ACL_CLIENT_REQUEST";
        case (ConnectionChangedReason::ACL_DISABLED):
            return "ACL_DISABLED";
        case (ConnectionChangedReason::DNS_TIMEDOUT):
            return "DNS_TIMEDOUT";
        case (ConnectionChangedReason::CONNECTION_TIMEDOUT):
            return "CONNECTION_TIMEDOUT";
        case (ConnectionChangedReason::CONNECTION_THROTTLED):
            return "CONNECTION_THROTTLED";
        case (ConnectionChangedReason::INVALID_AUTH):
            return "INVALID_AUTH";
        case (ConnectionChangedReason::PING_TIMEDOUT):
            return "PING_TIMEDOUT";
        case (ConnectionChangedReason::WRITE_TIMEDOUT):
            return "WRITE_TIMEDOUT";
        case (ConnectionChangedReason::READ_TIMEDOUT):
            return "READ_TIMEDOUT";
        case (ConnectionChangedReason::FAILURE_PROTOCOL_ERROR):
            return "FAILURE_PROTOCOL_ERROR";
        case (ConnectionChangedReason::INTERNAL_ERROR):
            return "INTERNAL_ERROR";
        case (ConnectionChangedReason::SERVER_INTERNAL_ERROR):
            return "SERVER_INTERNAL_ERROR";
        case (ConnectionChangedReason::SERVER_SIDE_DISCONNECT):
            return "SERVER_SIDE_DISCONNECT";
        case (ConnectionChangedReason::SERVER_ENDPOINT_CHANGED):
            return "SERVER_ENDPOINT_CHANGED";
    }
    throw std::runtime_error("invalidConnectionChangedReasonType");
}

inline ConnectionChangedReason toConnectionChangedReason(const std::string& stringValue) {
    static std::unordered_map<std::string, ConnectionChangedReason> map = {
        {"NONE", ConnectionChangedReason::NONE},
        {"SUCCESS", ConnectionChangedReason::SUCCESS},
        {"UNRECOVERABLE_ERROR", ConnectionChangedReason::UNRECOVERABLE_ERROR},
        {"ACL_CLIENT_REQUEST", ConnectionChangedReason::ACL_CLIENT_REQUEST},
        {"ACL_DISABLED", ConnectionChangedReason::ACL_DISABLED},
        {"DNS_TIMEDOUT", ConnectionChangedReason::DNS_TIMEDOUT},
        {"CONNECTION_TIMEDOUT", ConnectionChangedReason::CONNECTION_TIMEDOUT},
        {"CONNECTION_THROTTLED", ConnectionChangedReason::CONNECTION_THROTTLED},
        {"INVALID_AUTH", ConnectionChangedReason::INVALID_AUTH},
        {"PING_TIMEDOUT", ConnectionChangedReason::PING_TIMEDOUT},
        {"WRITE_TIMEDOUT", ConnectionChangedReason::WRITE_TIMEDOUT},
        {"READ_TIMEDOUT", ConnectionChangedReason::READ_TIMEDOUT},
        {"FAILURE_PROTOCOL_ERROR", ConnectionChangedReason::FAILURE_PROTOCOL_ERROR},
        {"INTERNAL_ERROR", ConnectionChangedReason::INTERNAL_ERROR},
        {"SERVER_INTERNAL_ERROR", ConnectionChangedReason::SERVER_INTERNAL_ERROR},
        {"SERVER_SIDE_DISCONNECT", ConnectionChangedReason::SERVER_SIDE_DISCONNECT},
        {"SERVER_ENDPOINT_CHANGED", ConnectionChangedReason::SERVER_ENDPOINT_CHANGED},
    };

    auto search = map.find(stringValue);
    if (search != map.end()) {
        return search->second;
    }
    throw std::runtime_error("invalidConnectionChangedReasonType");
}

inline void to_json(nlohmann::json& j, const ConnectionChangedReason& c) {
    j = toString(c);
}

inline void from_json(const nlohmann::json& j, ConnectionChangedReason& c) {
    c = toConnectionChangedReason(j);
}

}  // namespace alexa
}  // namespace message
}  // namespace aasb

#endif  // ALEXACLIENT_CONNECTIONCHANGEDREASON_H
