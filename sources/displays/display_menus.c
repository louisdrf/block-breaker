//
// Created by louis on 18/11/2023.
//

#include <stdio.h>
#include "../../headers/displays/display_menus.h"
#include "../../headers/includes/colors.h"
#include "../../headers/utils/utils.h"


int display_init_menu() {

    display_title();
    printf("\n\n%sPlay (1)%s        %sExit (0)%s \n" , GREEN, RESET, RED, RESET);
    int choice = get_int();

    return choice;
}


void display_title() {

    printf("\n\n");
    printf(MAGENTA"|  _ \\| |    / __ \\ / ____| |/ /    |  _ \\|  __ \\|  ____|   /\\   | |/ /  ____|  __ \\ \n"
           " | |_) | |   | |  | | |    | ' /     | |_) | |__) | |__     /  \\  | ' /| |__  | |__) |\n"
           " |  _ <| |   | |  | | |    |  <      |  _ <|  _  /|  __|   / /\\ \\ |  < |  __| |  _  / \n"
           " | |_) | |___| |__| | |____| . \\     | |_) | | \\ \\| |____ / ____ \\| . \\| |____| | \\ \\ \n"
           " |____/|______\\____/ \\_____|_|\\_\\    |____/|_|  \\_\\______/_/    \\_\\_|\\_\\______|_|  \\_\\"RESET);
}