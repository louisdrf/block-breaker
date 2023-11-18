//
// Created by louis on 18/11/2023.
//

#ifndef PROJET_JEU_STRUCTS_H
#define PROJET_JEU_STRUCTS_H
#include <stdbool.h>

typedef struct Player {

    bool            isPlaying;             // is the game running or not
    char            *name;                 // player name
    int             score;
    int             highscore;

};
#endif //PROJET_JEU_STRUCTS_H
