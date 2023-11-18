//
// Created by louis on 18/11/2023.
//

#ifndef PROJET_JEU_INIT_BLOCK_H
#define PROJET_JEU_INIT_BLOCK_H

#include "../../includes/structs.h"

Block *init_block(int block_resistance, int x, int y);
void free_block(Block *bl);

#endif //PROJET_JEU_INIT_BLOCK_H
