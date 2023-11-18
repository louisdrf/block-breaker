//
// Created by louis on 18/11/2023.
//

#include <stdio.h>
#include "../../headers/displays/display_menus.h"
#include "../../headers/includes/colors.h"


void display_init_menu() {

    display_menu_blocks();
    //display_title();
}


void display_menu_blocks() {

    wprintf(L"\x263a");
}

void display_title() {

    printf(MAGENTA"|  _ \\| |    / __ \\ / ____| |/ /    |  _ \\|  __ \\|  ____|   /\\   | |/ /  ____|  __ \\ \n"
           " | |_) | |   | |  | | |    | ' /     | |_) | |__) | |__     /  \\  | ' /| |__  | |__) |\n"
           " |  _ <| |   | |  | | |    |  <      |  _ <|  _  /|  __|   / /\\ \\ |  < |  __| |  _  / \n"
           " | |_) | |___| |__| | |____| . \\     | |_) | | \\ \\| |____ / ____ \\| . \\| |____| | \\ \\ \n"
           " |____/|______\\____/ \\_____|_|\\_\\    |____/|_|  \\_\\______/_/    \\_\\_|\\_\\______|_|  \\_\\"RESET);
}