//
// Created by louis on 18/11/2023.
//

#include <stdlib.h>
#include <string.h>
#include "../../../headers/player/platform/init_platform.h"


Platform *init_platform() {

    Platform *p = malloc(sizeof(Platform));

    char *sprite = "---";
    p->sprite = malloc(strlen(sprite) + 1);
    strcpy(p->sprite, sprite);

    p->x = (WINDOW_W / 2);
    p->y = WINDOW_H;

    return p;
}


void free_platform(Platform *p) {
    if(p == NULL) return;

    free(p->sprite);
    free(p);
}