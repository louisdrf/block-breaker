//
// Created by louis on 18/11/2023.
//

#include <stdlib.h>
#include <stdio.h>
#include "../../../headers/player/map/init_map.h"
#include "../../../headers/includes/enums.h"
#include "../../../headers/player/map/init_block.h"


void init_map(Player *player) {

    player->map = malloc(sizeof(Map));
    if(player->map == NULL) {
        fprintf(stderr, "Error while malloc Map.");
        exit(1);
    }

    player->map->height = WINDOW_H;
    player->map->width = WINDOW_W;

    player->map->nbBlocks = (player->map->height * player->map->width);
    init_map_grid(player);
}


/*
 * create INT map with 5 lines of blocks on top, platform and ball
 */
void init_map_grid(Player *player) {

    for(int i = 0; i < player->map->height; i++) {
        for(int j = 0; j < player->map->width; j++) {

            if(i <= 5)
                player->map->grid[i][j] = BLOCK;
            else
                player->map->grid[i][j] = VOID;

            if(j == 0 || j == (player->map->width - 1))
                player->map->grid[i][j] = BORDER;
        }
    }

    player->map->grid[player->platform->y][player->platform->x] = PLATFORM;
    player->map->grid[player->ball->y][player->ball->x] = BALL;

}


void free_map(Map *m) {
    // free blocks
}
