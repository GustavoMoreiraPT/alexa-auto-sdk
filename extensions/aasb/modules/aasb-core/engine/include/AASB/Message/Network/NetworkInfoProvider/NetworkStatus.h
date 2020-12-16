/*
 * Copyright 2017-2020 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#ifndef NETWORKINFOPROVIDER_NETWORKSTATUS_H
#define NETWORKINFOPROVIDER_NETWORKSTATUS_H

#include <string>
#include <vector>

#include <unordered_map>
#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>

namespace aasb {
namespace message {
namespace network {

//Enum Definition
enum class NetworkStatus {
    UNKNOWN,
    DISCONNECTED,
    DISCONNECTING,
    CONNECTED,
    CONNECTING,
};

inline std::string toString(NetworkStatus enumValue) {
    switch (enumValue) {
        case (NetworkStatus::UNKNOWN):
            return "UNKNOWN";
        case (NetworkStatus::DISCONNECTED):
            return "DISCONNECTED";
        case (NetworkStatus::DISCONNECTING):
            return "DISCONNECTING";
        case (NetworkStatus::CONNECTED):
            return "CONNECTED";
        case (NetworkStatus::CONNECTING):
            return "CONNECTING";
    }
    throw std::runtime_error("invalidNetworkStatusType");
}

inline NetworkStatus toNetworkStatus(const std::string& stringValue) {
    static std::unordered_map<std::string, NetworkStatus> map = {
        {"UNKNOWN", NetworkStatus::UNKNOWN},
        {"DISCONNECTED", NetworkStatus::DISCONNECTED},
        {"DISCONNECTING", NetworkStatus::DISCONNECTING},
        {"CONNECTED", NetworkStatus::CONNECTED},
        {"CONNECTING", NetworkStatus::CONNECTING},
    };

    auto search = map.find(stringValue);
    if (search != map.end()) {
        return search->second;
    }
    throw std::runtime_error("invalidNetworkStatusType");
}

inline void to_json(nlohmann::json& j, const NetworkStatus& c) {
    j = toString(c);
}

inline void from_json(const nlohmann::json& j, NetworkStatus& c) {
    c = toNetworkStatus(j);
}

}  // namespace network
}  // namespace message
}  // namespace aasb

#endif  // NETWORKINFOPROVIDER_NETWORKSTATUS_H