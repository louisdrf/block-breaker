//
// Created by louis on 19/11/2023.
//

#include <stdio.h>
#include "../../../headers/displays/map/display_map.h"
#include "../../../headers/utils/utils.h"
#include "../../../headers/includes/enums.h"
#include "../../../headers/includes/colors.h"


void display_map(Map *m) {

    clear();

    for(int i = 0; i < m->height; i++) {

        printf("| ");

        for(int j = 0; j < m->width; j++) {

            switch(m->grid[i][j]) {

                case VOID:
                    printf("     ");
                    break;

                case BLOCK:
                    if(j % 2 == 0) printf(GREEN"|###|"RESET);
                    if(j % 3 == 0) printf(RED"|###|"RESET);
                    if(j % 4 == 0) printf(BLUE"|###|"RESET);
                    else printf(YELLOW"|###|"RESET);
                    break;

                case BALL:
                    printf("  o  ");
                    break;

                case PLATFORM:
                    printf("=====");
                    break;
            }
        }
        printf(" |\n");
    }
}