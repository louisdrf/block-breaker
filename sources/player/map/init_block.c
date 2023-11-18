//
// Created by louis on 18/11/2023.
//

#include <stdio.h>
#include <stdlib.h>
#include "../../../headers/player/map/init_block.h"


Block *init_block(int block_resistance, int x, int y) {

    Block *bl = malloc(sizeof(Block));
    if(bl == NULL) {
        fprintf(stderr, "Error while malloc Block.");
        exit(1);
    }

    bl->destroyed         = false;
    bl->block_resistance  = block_resistance;
    bl->lives             = block_resistance;
    bl->x                 = x;
    bl->y                 = y;

    return bl;
}

void free_block(Block *bl) {
    if(bl == NULL) return;

    free(bl);
}