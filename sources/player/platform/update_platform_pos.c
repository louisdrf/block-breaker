//
// Created by louis on 19/11/2023.
//

#include "../../../headers/player/platform/update_platform_pos.h"
#include "../../../headers/includes/enums.h"

#define LEFT 0
#define RIGHT 1

void update_platform_pos(Player *player, int direction) {

    player->map->grid[player->platform->y][player->platform->x] = VOID;

    switch(direction) {
        case LEFT:
            player->platform->x--;
            player->map->grid[player->platform->y][player->platform->x] = PLATFORM;
            break;

        case RIGHT:
            player->platform->x++;
            player->map->grid[player->platform->y][player->platform->x] = PLATFORM;
            break;
    }
}