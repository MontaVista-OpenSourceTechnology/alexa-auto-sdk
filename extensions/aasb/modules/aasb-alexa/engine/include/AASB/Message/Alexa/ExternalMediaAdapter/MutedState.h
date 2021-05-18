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

#ifndef EXTERNALMEDIAADAPTER_MUTEDSTATE_H
#define EXTERNALMEDIAADAPTER_MUTEDSTATE_H

#include <string>
#include <vector>

#include <unordered_map>
#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>

namespace aasb {
namespace message {
namespace alexa {

//Enum Definition
enum class MutedState {
    MUTED,
    UNMUTED,
};

inline std::string toString(MutedState enumValue) {
    switch (enumValue) {
        case (MutedState::MUTED):
            return "MUTED";
        case (MutedState::UNMUTED):
            return "UNMUTED";
    }
    throw std::runtime_error("invalidMutedStateType");
}

inline MutedState toMutedState(const std::string& stringValue) {
    static std::unordered_map<std::string, MutedState> map = {
        {"MUTED", MutedState::MUTED},
        {"UNMUTED", MutedState::UNMUTED},
    };

    auto search = map.find(stringValue);
    if (search != map.end()) {
        return search->second;
    }
    throw std::runtime_error("invalidMutedStateType");
}

inline void to_json(nlohmann::json& j, const MutedState& c) {
    j = toString(c);
}

inline void from_json(const nlohmann::json& j, MutedState& c) {
    c = toMutedState(j);
}

}  // namespace alexa
}  // namespace message
}  // namespace aasb

#endif  // EXTERNALMEDIAADAPTER_MUTEDSTATE_H
