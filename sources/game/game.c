//
// Created by louis on 18/11/2023.
//

#include "../../headers/game/game.h"
#include "../../headers/player/init_player.h"
#include "../../headers/displays/map/display_map.h"


void launch_game() {

    Player *player = init_player();     // init player, platform, ball and map
    display_map(player->map);
}


void exit_game() {
    // free all
    // exit
}