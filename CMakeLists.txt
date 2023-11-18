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
        headers/displays/utils/set_unicode.h)
