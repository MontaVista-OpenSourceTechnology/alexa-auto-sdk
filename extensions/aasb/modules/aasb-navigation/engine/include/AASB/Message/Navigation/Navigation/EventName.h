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

#ifndef NAVIGATION_EVENTNAME_H
#define NAVIGATION_EVENTNAME_H

#include <string>
#include <vector>

#include <unordered_map>
#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>

namespace aasb {
namespace message {
namespace navigation {
namespace navigation {

//Enum Definition
enum class EventName {
    NAVIGATION_STARTED,
    PREVIOUS_WAYPOINTS_SHOWN,
    PREVIOUS_NAVIGATION_STARTED,
    ROUTE_OVERVIEW_SHOWN,
    DIRECTIONS_LIST_SHOWN,
    ZOOMED_IN,
    ZOOMED_OUT,
    MAP_CENTERED,
    ORIENTED_NORTH,
    SCROLLED_NORTH,
    SCROLLED_UP,
    SCROLLED_EAST,
    SCROLLED_RIGHT,
    SCROLLED_SOUTH,
    SCROLLED_DOWN,
    SCROLLED_WEST,
    SCROLLED_LEFT,
    ROUTE_GUIDANCE_MUTED,
    ROUTE_GUIDANCE_UNMUTED,
    DEFAULT_ALTERNATE_ROUTES_SHOWN,
    SHORTER_TIME_ROUTES_SHOWN,
    SHORTER_DISTANCE_ROUTES_SHOWN,
    TURN_GUIDANCE_ANNOUNCED,
    EXIT_GUIDANCE_ANNOUNCED,
    ENTER_GUIDANCE_ANNOUNCED,
    MERGE_GUIDANCE_ANNOUNCED,
    LANE_GUIDANCE_ANNOUNCED,
    SPEED_LIMIT_REGULATION_ANNOUNCED,
    CARPOOL_RULES_REGULATION_ANNOUNCED,
};

inline std::string toString(EventName enumValue) {
    switch (enumValue) {
        case (EventName::NAVIGATION_STARTED):
            return "NAVIGATION_STARTED";
        case (EventName::PREVIOUS_WAYPOINTS_SHOWN):
            return "PREVIOUS_WAYPOINTS_SHOWN";
        case (EventName::PREVIOUS_NAVIGATION_STARTED):
            return "PREVIOUS_NAVIGATION_STARTED";
        case (EventName::ROUTE_OVERVIEW_SHOWN):
            return "ROUTE_OVERVIEW_SHOWN";
        case (EventName::DIRECTIONS_LIST_SHOWN):
            return "DIRECTIONS_LIST_SHOWN";
        case (EventName::ZOOMED_IN):
            return "ZOOMED_IN";
        case (EventName::ZOOMED_OUT):
            return "ZOOMED_OUT";
        case (EventName::MAP_CENTERED):
            return "MAP_CENTERED";
        case (EventName::ORIENTED_NORTH):
            return "ORIENTED_NORTH";
        case (EventName::SCROLLED_NORTH):
            return "SCROLLED_NORTH";
        case (EventName::SCROLLED_UP):
            return "SCROLLED_UP";
        case (EventName::SCROLLED_EAST):
            return "SCROLLED_EAST";
        case (EventName::SCROLLED_RIGHT):
            return "SCROLLED_RIGHT";
        case (EventName::SCROLLED_SOUTH):
            return "SCROLLED_SOUTH";
        case (EventName::SCROLLED_DOWN):
            return "SCROLLED_DOWN";
        case (EventName::SCROLLED_WEST):
            return "SCROLLED_WEST";
        case (EventName::SCROLLED_LEFT):
            return "SCROLLED_LEFT";
        case (EventName::ROUTE_GUIDANCE_MUTED):
            return "ROUTE_GUIDANCE_MUTED";
        case (EventName::ROUTE_GUIDANCE_UNMUTED):
            return "ROUTE_GUIDANCE_UNMUTED";
        case (EventName::DEFAULT_ALTERNATE_ROUTES_SHOWN):
            return "DEFAULT_ALTERNATE_ROUTES_SHOWN";
        case (EventName::SHORTER_TIME_ROUTES_SHOWN):
            return "SHORTER_TIME_ROUTES_SHOWN";
        case (EventName::SHORTER_DISTANCE_ROUTES_SHOWN):
            return "SHORTER_DISTANCE_ROUTES_SHOWN";
        case (EventName::TURN_GUIDANCE_ANNOUNCED):
            return "TURN_GUIDANCE_ANNOUNCED";
        case (EventName::EXIT_GUIDANCE_ANNOUNCED):
            return "EXIT_GUIDANCE_ANNOUNCED";
        case (EventName::ENTER_GUIDANCE_ANNOUNCED):
            return "ENTER_GUIDANCE_ANNOUNCED";
        case (EventName::MERGE_GUIDANCE_ANNOUNCED):
            return "MERGE_GUIDANCE_ANNOUNCED";
        case (EventName::LANE_GUIDANCE_ANNOUNCED):
            return "LANE_GUIDANCE_ANNOUNCED";
        case (EventName::SPEED_LIMIT_REGULATION_ANNOUNCED):
            return "SPEED_LIMIT_REGULATION_ANNOUNCED";
        case (EventName::CARPOOL_RULES_REGULATION_ANNOUNCED):
            return "CARPOOL_RULES_REGULATION_ANNOUNCED";
    }
    throw std::runtime_error("invalidEventNameType");
}

inline EventName toEventName(const std::string& stringValue) {
    static std::unordered_map<std::string, EventName> map = {
        {"NAVIGATION_STARTED", EventName::NAVIGATION_STARTED},
        {"PREVIOUS_WAYPOINTS_SHOWN", EventName::PREVIOUS_WAYPOINTS_SHOWN},
        {"PREVIOUS_NAVIGATION_STARTED", EventName::PREVIOUS_NAVIGATION_STARTED},
        {"ROUTE_OVERVIEW_SHOWN", EventName::ROUTE_OVERVIEW_SHOWN},
        {"DIRECTIONS_LIST_SHOWN", EventName::DIRECTIONS_LIST_SHOWN},
        {"ZOOMED_IN", EventName::ZOOMED_IN},
        {"ZOOMED_OUT", EventName::ZOOMED_OUT},
        {"MAP_CENTERED", EventName::MAP_CENTERED},
        {"ORIENTED_NORTH", EventName::ORIENTED_NORTH},
        {"SCROLLED_NORTH", EventName::SCROLLED_NORTH},
        {"SCROLLED_UP", EventName::SCROLLED_UP},
        {"SCROLLED_EAST", EventName::SCROLLED_EAST},
        {"SCROLLED_RIGHT", EventName::SCROLLED_RIGHT},
        {"SCROLLED_SOUTH", EventName::SCROLLED_SOUTH},
        {"SCROLLED_DOWN", EventName::SCROLLED_DOWN},
        {"SCROLLED_WEST", EventName::SCROLLED_WEST},
        {"SCROLLED_LEFT", EventName::SCROLLED_LEFT},
        {"ROUTE_GUIDANCE_MUTED", EventName::ROUTE_GUIDANCE_MUTED},
        {"ROUTE_GUIDANCE_UNMUTED", EventName::ROUTE_GUIDANCE_UNMUTED},
        {"DEFAULT_ALTERNATE_ROUTES_SHOWN", EventName::DEFAULT_ALTERNATE_ROUTES_SHOWN},
        {"SHORTER_TIME_ROUTES_SHOWN", EventName::SHORTER_TIME_ROUTES_SHOWN},
        {"SHORTER_DISTANCE_ROUTES_SHOWN", EventName::SHORTER_DISTANCE_ROUTES_SHOWN},
        {"TURN_GUIDANCE_ANNOUNCED", EventName::TURN_GUIDANCE_ANNOUNCED},
        {"EXIT_GUIDANCE_ANNOUNCED", EventName::EXIT_GUIDANCE_ANNOUNCED},
        {"ENTER_GUIDANCE_ANNOUNCED", EventName::ENTER_GUIDANCE_ANNOUNCED},
        {"MERGE_GUIDANCE_ANNOUNCED", EventName::MERGE_GUIDANCE_ANNOUNCED},
        {"LANE_GUIDANCE_ANNOUNCED", EventName::LANE_GUIDANCE_ANNOUNCED},
        {"SPEED_LIMIT_REGULATION_ANNOUNCED", EventName::SPEED_LIMIT_REGULATION_ANNOUNCED},
        {"CARPOOL_RULES_REGULATION_ANNOUNCED", EventName::CARPOOL_RULES_REGULATION_ANNOUNCED},
    };

    auto search = map.find(stringValue);
    if (search != map.end()) {
        return search->second;
    }
    throw std::runtime_error("invalidEventNameType");
}

inline void to_json(nlohmann::json& j, const EventName& c) {
    j = toString(c);
}

inline void from_json(const nlohmann::json& j, EventName& c) {
    c = toEventName(j);
}

}  // namespace navigation
}  // namespace navigation
}  // namespace message
}  // namespace aasb

#endif  // NAVIGATION_EVENTNAME_H
