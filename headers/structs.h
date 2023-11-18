//
// Created by louis on 18/11/2023.
//

#ifndef PROJET_JEU_STRUCTS_H
#define PROJET_JEU_STRUCTS_H
#include <stdbool.h>


typedef struct Platform {

    char                *sprite;            // platform sprite -> -----
    unsigned int         x;
    unsigned int         y;

} Platform;



typedef struct Ball {

    char                *sprite;            // ball sprite -> o
    unsigned int         x;
    unsigned int         y;
    int                  speed;
    int                  strength;

} Ball;



typedef struct Block {

    bool                    destroyed;      // is the block destroyed or not
    unsigned short          lives;          // number of lives depending on the block type
    unsigned short          block_type;     // difficulty to destroy : easy, moderate, hard...
    unsigned short          x;
    unsigned short          y;

} Block;




typedef struct Player {

    bool            isPlaying;             // is the game running or not
    char            *name;                 // player name
    int             score;
    int             highscore;
    Platform        platform;

} Player;


#endif //PROJET_JEU_STRUCTS_H
