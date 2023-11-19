//
// Created by louis on 19/11/2023.
//

#include <stdio.h>
#include "../../../headers/player/platform/update_platform_pos.h"
#include "../../../headers/includes/enums.h"
#include "../../../headers/utils/utils.h"

#define LEFT 0
#define RIGHT 1

void update_platform_pos(Player *player, int direction) {

   if(direction == LEFT) {
       if(player->map->grid[player->platform->y][player->platform->x - 1] == BORDER)
           return;
   }
    if(direction == RIGHT) {
        if(player->map->grid[player->platform->y][player->platform->x + 1] == BORDER)
            return;
    }


    clearPreviousPos(player->platform->x, player->platform->y);
    player->map->grid[player->platform->y][player->platform->x] = VOID;

    switch(direction) {
        case LEFT:
            player->platform->x--;
            break;

        case RIGHT:
            player->platform->x++;
            break;
    }

    player->map->grid[player->platform->y][player->platform->x] = PLATFORM;
    printf("\033[%d;%dH", player->platform->y, player->platform->x * BLOCK_SIZE);
    printf("=====");
}