//
// Created by louis on 18/11/2023.
//

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../../headers/player/init_player.h"
#include "../../headers/player/platform/init_platform.h"
#include "../../headers/player/ball/init_ball.h"
#include "../../headers/player/map/init_map.h"
#include "../../headers/utils/utils.h"
#include "../../headers/includes/colors.h"

Player *init_player() {

    Player *player = malloc(sizeof(Player));
    if(player == NULL) {
        fprintf(stderr, "Error while malloc Player.");
        exit(1);
    }

    get_player_name(player);
    get_game_difficulty(player);

    player->score       = 0;
    player->highscore   = 0;
    player->nbBalls     = 3;
    player->nbBallsLeft = 3;
    player->isPlaying   = true;
    player->platform    = init_platform();
    player->ball        = init_ball();
    player->map         = init_map(player->difficulty);

    return player;
}


void get_game_difficulty(Player *p) {

    clear();

    printf("Chose game difficulty : \n\n");
    printf(GREEN  "EASY   (1)\n"RESET);
    printf(YELLOW "NORMAL (2)\n"RESET);
    printf(RED    "HARD   (3)\n"RESET);

    p->difficulty = get_int();
}


void get_player_name(Player *player) {

    clear();

    char name[40];

    printf("\nYour player name : ");
    fgets(name, sizeof(name), stdin);

    if(strchr(name, '\n') != NULL && strlen(name) == 1) {
        printf("\nPlease enter a valid name.\n");
        get_player_name(player);
    }
    else if(strlen(name) >= 38) {
        printf("\nYour player name must be 40 caracters max.\n");
        get_player_name(player);
    }

    name[strlen(name) - 1] = '\0';

    player->name = malloc(strlen(name) + 1);
    strcpy(player->name, name);

}