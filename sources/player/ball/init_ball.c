//
// Created by louis on 18/11/2023.
//

#include <stdlib.h>
#include <string.h>
#include "../../../headers/player/ball/init_ball.h"
#include "../../../headers/includes/enums.h"


Ball *init_ball() {

    Ball *b = malloc(sizeof(Ball));

    char *sprite = "o";
    b->sprite = malloc(strlen(sprite) + 1);
    strcpy(b->sprite, sprite);

    b->speed    = MODERATE;
    b->strength = WEAK;
    b->x        = (WINDOW_W / 2);
    b->y        = WINDOW_H - 1;     // above player platform

    return b;
}


void free_ball(Ball *b) {
    if(b == NULL) return;

    free(b->sprite);
    free(b);
}