//
// Created by louis on 18/11/2023.
//

#ifndef PROJET_JEU_INIT_MAP_H
#define PROJET_JEU_INIT_MAP_H

#include "../../includes/structs.h"

Map* init_map();
void init_map_grid(Map *m);
void init_map_blocks(Map *m);

void free_map(Map *m);

#endif //PROJET_JEU_INIT_MAP_H
