//
// Created by louis on 18/11/2023.
//

#include <stdlib.h>
#include <conio.h>
#include "../../headers/utils/utils.h"

int get_int() {
    return (getch() - 48);
}

void clear() {
    system("cls");
}

int random_int(int min, int max) {

    return rand() % (max + 1 - min) + min;
}