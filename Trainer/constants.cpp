//
//  constants.cpp
//  Headshot
//
//
//  Created by bob smith on 2021/1/24.
//

#include "constants.hpp"

Constants::Constants() {
    offsets.insert(std::make_pair("health", health));
    offsets.insert(std::make_pair("weapon_ammo", weapon_ammo));
    offsets.insert(std::make_pair("weapon_clip", weapon_clip));
    offsets.insert(std::make_pair("player_name", player_name));
    offsets.insert(std::make_pair("head_vector3f", head_vector3f));
    offsets.insert(std::make_pair("foot_vector3f", foot_vector3f));
    offsets.insert(std::make_pair("yaw", yaw));
    offsets.insert(std::make_pair("pitch", pitch));
    offsets.insert(std::make_pair("team", team));
}
