cmake_minimum_required(VERSION 3.26)
project(projet_jeu)

set(CMAKE_CXX_STANDARD 17)

add_executable(projet_jeu
        main.c
        headers/includes/defines.h
        headers/includes/structs.h
        headers/includes/enums.h
        sources/displays/display_menus.c
        headers/displays/display_menus.h
        headers/includes/colors.h
        sources/utils/set_unicode.c
        headers/utils/set_unicode.h
        sources/utils/utils.c
        headers/utils/utils.h
        sources/game/game.c
        headers/game/game.h
        sources/player/init_player.c
        headers/player/init_player.h
        sources/player/platform/init_platform.c
        headers/player/platform/init_platform.h
        sources/player/ball/init_ball.c
        headers/player/ball/init_ball.h
        sources/player/map/init_map.c
        headers/player/map/init_map.h
        sources/player/map/init_block.c
        headers/player/map/init_block.h
        sources/displays/map/display_map.c
        headers/displays/map/display_map.h
)
