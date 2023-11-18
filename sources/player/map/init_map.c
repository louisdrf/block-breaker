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
    init_map_blocks(m, difficulty);

    return m;
}


/*
 * create INT map with 5 lines of blocks on top
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

    // place platform and ball
}

void init_map_blocks(Map *m, int block_resistance) {

    m->blocks = malloc(sizeof(Block *) * m->height);        // allocates two dimensions Blocks map
    for(int i = 0; i < m->height; i++) {
        m->blocks[i] = malloc(sizeof(Block));
    }

    for(int i = 0; i < m->height; i++) {
        for(int j = 0; j < m->width; j++) {

            switch(m->grid[i][j]) {

                case VOID:
                    m->blocks[i][j] = NULL;
                    break;

                case BLOCK:
                    m->blocks[i][j] = init_block(block_resistance, j, i);           // j = pos x , i = pos y
                    break;

            }
        }
    }
}


void free_map(Map *m) {
    // free blocks
}
