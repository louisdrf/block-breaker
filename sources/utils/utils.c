//
// Created by louis on 18/11/2023.
//

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "../../headers/utils/utils.h"
#include "../../headers/includes/defines.h"

int get_int() {
    return (getch() - 48);
}

void clear() {
    system("cls");
}

int random_int(int min, int max) {

    return rand() % (max + 1 - min) + min;
}


void clearPreviousPos(int x, int y) {
    printf("\033[%d;%dH", y , x * BLOCK_SIZE);
    printf("     ");
}