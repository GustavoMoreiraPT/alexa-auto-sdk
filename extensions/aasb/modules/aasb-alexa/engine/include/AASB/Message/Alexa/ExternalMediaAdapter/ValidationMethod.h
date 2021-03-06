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

#ifndef EXTERNALMEDIAADAPTER_VALIDATIONMETHOD_H
#define EXTERNALMEDIAADAPTER_VALIDATIONMETHOD_H

#include <string>
#include <vector>

#include <unordered_map>
#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>

namespace aasb {
namespace message {
namespace alexa {

//Enum Definition
enum class ValidationMethod {
    SIGNING_CERTIFICATE,
    GENERATED_CERTIFICATE,
    NONE,
};

inline std::string toString(ValidationMethod enumValue) {
    switch (enumValue) {
        case (ValidationMethod::SIGNING_CERTIFICATE):
            return "SIGNING_CERTIFICATE";
        case (ValidationMethod::GENERATED_CERTIFICATE):
            return "GENERATED_CERTIFICATE";
        case (ValidationMethod::NONE):
            return "NONE";
    }
    throw std::runtime_error("invalidValidationMethodType");
}

inline ValidationMethod toValidationMethod(const std::string& stringValue) {
    static std::unordered_map<std::string, ValidationMethod> map = {
        {"SIGNING_CERTIFICATE", ValidationMethod::SIGNING_CERTIFICATE},
        {"GENERATED_CERTIFICATE", ValidationMethod::GENERATED_CERTIFICATE},
        {"NONE", ValidationMethod::NONE},
    };

    auto search = map.find(stringValue);
    if (search != map.end()) {
        return search->second;
    }
    throw std::runtime_error("invalidValidationMethodType");
}

inline void to_json(nlohmann::json& j, const ValidationMethod& c) {
    j = toString(c);
}

inline void from_json(const nlohmann::json& j, ValidationMethod& c) {
    c = toValidationMethod(j);
}

}  // namespace alexa
}  // namespace message
}  // namespace aasb

#endif  // EXTERNALMEDIAADAPTER_VALIDATIONMETHOD_H
