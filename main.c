//
// Created by louis on 14/11/2023.
//

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "headers/utils/set_unicode.h"
#include "headers/displays/display_menus.h"
#include "headers/game/game.h"

#define PLAY 1

int main() {

    srand(time(NULL));

    //set_unicode_mode();

    if(display_init_menu() == PLAY)
        launch_game();
    else
        return EXIT_SUCCESS;


     return EXIT_SUCCESS;
}
