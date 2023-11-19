//
// Created by louis on 19/11/2023.
//

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "headers/loop.h"
#include "headers/displays/map/display_map.h"
#include "headers/utils/utils.h"
#include "headers/player/platform/update_platform_pos.h"
#include "headers/includes/colors.h"

#define LEFT 'K'
#define RIGHT 'M'

void launch_loop(Player *player) {

    int move;

    while(player->isPlaying) {

        move = getch();

        switch(move) {
            case LEFT:
                update_platform_pos(player, 0);
                break;

            case RIGHT:
                update_platform_pos(player, 1);
                break;

            case 'q':
                exit(1);
        }

    }

}