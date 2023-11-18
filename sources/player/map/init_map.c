//
// Created by louis on 18/11/2023.
//

#include <stdlib.h>
#include "../../../headers/player/map/init_map.h"
#include "../../../headers/includes/enums.h"


Map* init_map() {

    Map *m = malloc(sizeof(Map));

    m->height = WINDOW_H;
    m->width = WINDOW_W;

    m->nbBlocks = (m->height * m->width);
    init_map_grid(m);
    init_map_blocks(m);

    return m;
}

void init_map_grid(Map *m) {

    for(int i = 0; i < m->height; i++) {
        for(int j = 0; j < m->width; j++) {
            m->grid[i][j] = VOID;
        }
    }
}

void init_map_blocks(Map *m) {
}


void free_map(Map *m) {

}
