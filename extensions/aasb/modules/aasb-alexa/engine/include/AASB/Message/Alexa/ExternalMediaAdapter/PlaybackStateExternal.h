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

#ifndef EXTERNALMEDIAADAPTER_PLAYBACKSTATEEXTERNAL_H
#define EXTERNALMEDIAADAPTER_PLAYBACKSTATEEXTERNAL_H

#include <string>
#include <vector>

#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>
#include "AASB/Message/Alexa/ExternalMediaAdapter/SupportedPlaybackOperation.h"
#include "AASB/Message/Alexa/ExternalMediaAdapter/Favorites.h"
#include "AASB/Message/Alexa/ExternalMediaAdapter/MediaType.h"

namespace aasb {
namespace message {
namespace alexa {

//Class Definition
struct PlaybackStateExternal {
    using SupportedPlaybackOperation = ::aasb::message::alexa::SupportedPlaybackOperation;
    using Favorites = ::aasb::message::alexa::Favorites;
    using MediaType = ::aasb::message::alexa::MediaType;

    std::string toString() const;
    std::string state;
    std::vector<SupportedPlaybackOperation> supportedOperations;
    int trackOffset;
    bool shuffleEnabled;
    bool repeatEnabled;
    Favorites favorites;
    std::string type;
    std::string playbackSource;
    std::string playbackSourceId;
    std::string trackName;
    std::string trackId;
    std::string trackNumber;
    std::string artistName;
    std::string artistId;
    std::string albumName;
    std::string albumId;
    std::string tinyURL;
    std::string smallURL;
    std::string mediumURL;
    std::string largeURL;
    std::string coverId;
    std::string mediaProvider;
    MediaType mediaType;
    int duration;
};

//JSON Serialization
inline void to_json(nlohmann::json& j, const PlaybackStateExternal& c) {
    j = nlohmann::json{
        {"state", c.state},
        {"supportedOperations", c.supportedOperations},
        {"trackOffset", c.trackOffset},
        {"shuffleEnabled", c.shuffleEnabled},
        {"repeatEnabled", c.repeatEnabled},
        {"favorites", c.favorites},
        {"type", c.type},
        {"playbackSource", c.playbackSource},
        {"playbackSourceId", c.playbackSourceId},
        {"trackName", c.trackName},
        {"trackId", c.trackId},
        {"trackNumber", c.trackNumber},
        {"artistName", c.artistName},
        {"artistId", c.artistId},
        {"albumName", c.albumName},
        {"albumId", c.albumId},
        {"tinyURL", c.tinyURL},
        {"smallURL", c.smallURL},
        {"mediumURL", c.mediumURL},
        {"largeURL", c.largeURL},
        {"coverId", c.coverId},
        {"mediaProvider", c.mediaProvider},
        {"mediaType", c.mediaType},
        {"duration", c.duration},
    };
}
inline void from_json(const nlohmann::json& j, PlaybackStateExternal& c) {
    j.at("state").get_to(c.state);
    j.at("supportedOperations").get_to(c.supportedOperations);
    j.at("trackOffset").get_to(c.trackOffset);
    j.at("shuffleEnabled").get_to(c.shuffleEnabled);
    j.at("repeatEnabled").get_to(c.repeatEnabled);
    j.at("favorites").get_to(c.favorites);
    j.at("type").get_to(c.type);
    j.at("playbackSource").get_to(c.playbackSource);
    j.at("playbackSourceId").get_to(c.playbackSourceId);
    j.at("trackName").get_to(c.trackName);
    j.at("trackId").get_to(c.trackId);
    j.at("trackNumber").get_to(c.trackNumber);
    j.at("artistName").get_to(c.artistName);
    j.at("artistId").get_to(c.artistId);
    j.at("albumName").get_to(c.albumName);
    j.at("albumId").get_to(c.albumId);
    j.at("tinyURL").get_to(c.tinyURL);
    j.at("smallURL").get_to(c.smallURL);
    j.at("mediumURL").get_to(c.mediumURL);
    j.at("largeURL").get_to(c.largeURL);
    j.at("coverId").get_to(c.coverId);
    j.at("mediaProvider").get_to(c.mediaProvider);
    j.at("mediaType").get_to(c.mediaType);
    j.at("duration").get_to(c.duration);
}

inline std::string PlaybackStateExternal::toString() const {
    nlohmann::json j = *this;
    return j.dump(3);
}

}  // namespace alexa
}  // namespace message
}  // namespace aasb

#endif  // EXTERNALMEDIAADAPTER_PLAYBACKSTATEEXTERNAL_H
