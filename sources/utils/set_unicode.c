//
// Created by louis on 18/11/2023.
//

#include "../../headers/displays/utils/set_unicode.h"
#include <io.h>
#include <fcntl.h>
#include <stdio.h>

void set_unicode_mode() {

    _setmode(_fileno(stdout), _O_U16TEXT);
}