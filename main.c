//
// Created by louis on 14/11/2023.
//

#include <stdio.h>
#include "headers/utils/set_unicode.h"
#include "headers/displays/display_menus.h"

#define PLAY 1
#define EXIT 0

int main() {

    set_unicode_mode();
    if(display_init_menu() == PLAY)
        launch_game();

    else exit_game();

}
