//
// Created by louis on 19/11/2023.
//

#include <conio.h>
#include <stdio.h>
#include "headers/loop.h"
#include "headers/displays/map/display_map.h"
#include "headers/utils/utils.h"

#define LEFT 'K'
#define RIGHT 'M'

void launch_loop(Player *player) {

    int move;

    while(player->isPlaying) {

        clear();
        display_map(player->map);

        move = getch();

        switch(move) {
            case LEFT:
                // move platform on left
                break;

            case RIGHT:
                // move platform on right
                break;

            default:
                clear();
                printf("bad entry");
                break;
        }

    }

}