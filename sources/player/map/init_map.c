//
// Created by louis on 18/11/2023.
//

#include <stdlib.h>
#include <stdio.h>
#include "../../../headers/player/map/init_map.h"
#include "../../../headers/includes/enums.h"
#include "../../../headers/player/map/init_block.h"


Map* init_map(int difficulty) {

    Map *m = malloc(sizeof(Map));
    if(m == NULL) {
        fprintf(stderr, "Error while malloc Map.");
        exit(1);
    }

    m->height = WINDOW_H;
    m->width = WINDOW_W;

    m->nbBlocks = (m->height * m->width);
    init_map_grid(m);

    return m;
}


/*
 * create INT map with 5 lines of blocks on top, platform and ball
 */
void init_map_grid(Map *m) {

    for(int i = 0; i < m->height; i++) {
        for(int j = 0; j < m->width; j++) {

            if(i <= 5)
                m->grid[i][j] = BLOCK;
            else
                m->grid[i][j] = VOID;
        }
    }

    m->grid[m->height - 1][m->width / 2] = PLATFORM;
    m->grid[m->height - 2][m->width / 2] = BALL;

}


void free_map(Map *m) {
    // free blocks
}
