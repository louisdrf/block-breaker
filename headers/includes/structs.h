//
// Created by louis on 18/11/2023.
//

#ifndef PROJET_JEU_STRUCTS_H
#define PROJET_JEU_STRUCTS_H
#include <stdbool.h>
#include "defines.h"


typedef struct Platform {

    unsigned int         x;
    unsigned int         y;

} Platform;



typedef struct Ball {

    unsigned int         x;
    unsigned int         y;
    int                  speed;
    int                  strength;
    unsigned short       direction;

} Ball;



typedef struct Block {

    bool                    destroyed;               // is the block destroyed or not
    unsigned short          lives;                   // number of lives depending on the block type
    unsigned short          block_resistance;        // difficulty to destroy : easy, moderate, hard...
    unsigned short          x;
    unsigned short          y;

} Block;


typedef struct Map {

    unsigned short          height;
    unsigned short          width;
    int                     nbBlocks;
    unsigned short          grid[WINDOW_H][WINDOW_W];

} Map;


typedef struct Player {

    bool                isPlaying;              // is the game running or not
    unsigned short      difficulty;             // chosen difficulty
    char               *name;                   // player name
    int                 score;
    int                 highscore;
    unsigned short      nbBalls;
    unsigned short      nbBallsLeft;
    Platform           *platform;
    Ball               *ball;                   // player currently used
    Map                *map;

} Player;


#endif //PROJET_JEU_STRUCTS_H
