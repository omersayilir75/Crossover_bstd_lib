#pragma once

#include <stdint.h>

typedef struct bstd_picture_t {
    char *bytes;
    char *mask;
    uint8_t length;

} bstd_picture;