#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "colors.h"
#define str(r) r

struct Color {
    char text[8];
    char bold[8];
    char underline[8];
    char bg[8];
    char hi[8];
    char bhi[8];
};

typedef struct Color color;

/**
 * @brief blacks
 *
 */
color black = {
    .text = BLK,
    .underline = UBLK,
    .bg = BLKB,
    .hi = HBLK,
    .bhi = BLKHB
};
/**
 * @brief reds
 *
 * @param m string to colorize
 */
color red = {
    .text = RED,
    .underline = URED,
    .bg = REDB,
    .bold = BRED,
    .hi = HRED,
    .bhi = REDHB
};


/**
 * @brief greens
 *
 * @param m msg to colorize
 */
color green = {
    .text = GRN,
    .underline = UGRN,
    .bg = GRNB,
    .bold = BGRN,
    .hi = HGRN,
    .bhi = GRNHB
};

/**
 * @brief yellows
 *
 * @param m the string to colorize
 */
color yellow = {
    .text = YEL,
    .underline = UYEL,
    .bold = BYEL,
    .bg = YELB,
    .hi = HYEL,
    .bhi = BHYEL
};

/**
 * @brief blues
 *
 * @param m string to colorize
 */
color blue = {
    .text = BLU,
    .underline = UBLU,
    .bold = BBLU,
    .bg = BLUB,
    .hi = HBLU,
    .bhi = BHBLU
};

/**
 * @brief purples
 *
 * @param m string to colorize
 */
color purple = {
    .text = MAG,
    .underline = UMAG,
    .bg = MAGB,
    .bold = BMAG,
    .hi = HMAG,
    .bhi = BHMAG
};

/**
 * @brief cyan
 *
 * @param m string to colorize
 */
color cyan = {
    .text = CYN,
    .bg = CYNB,
    .underline = UCYN,
    .bold = BCYN,
    .hi = HCYN,
    .bhi = BHCYN
};
/**
 * @brief whites
 *
 * @param m string to colorize
 */
color white = {
    .text = WHT,
    .bg = WHTB,
    .underline = UWHT,
    .bold = BWHT,
    .hi = HWHT,
    .bhi = BHWHT
};
