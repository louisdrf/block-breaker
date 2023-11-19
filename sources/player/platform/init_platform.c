//
// Created by louis on 18/11/2023.
//

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../../../headers/player/platform/init_platform.h"


Platform *init_platform() {

    Platform *p = malloc(sizeof(Platform));
    if(p == NULL) {
        fprintf(stderr, "Error while malloc Platform.");
        exit(1);
    }

    p->x = (WINDOW_W / 2) - 1;
    p->y = WINDOW_H - 1;

    return p;
}


void free_platform(Platform *p) {
    if(p == NULL) return;
    free(p);
}