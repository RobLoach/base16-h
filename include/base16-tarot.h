/**
 * Base16 tarot 
 * 
 * @author ed (https://codeberg.org/ed)
 * 
 * Template by Rob Loach (https://robloach.net)
 * base16-h: https://github.com/robloach/base16-h
 */

#ifndef BASE16_H__
#define BASE16_H__

/**
 * A single color used for Base16.
 */
typedef struct base16_scheme_color {
    unsigned char r; /** Red channel */
    unsigned char g; /** Green channel */
    unsigned char b; /** Blue channel */
} base16_scheme_color;

/**
 * A Base16 Scheme.
 */
typedef struct base16_scheme {
    const char *name; /** The name of the scheme. */
    base16_scheme_color base[16]; /** An array of the base16 colors for the scheme. */
} base16_scheme;

#endif  /* BASE16_H__ */

#ifndef BASE16_tarot_H__
#define BASE16_tarot_H__

/**
 * The Base16 tarot scheme.
 * 
 * By: ed (https://codeberg.org/ed)
 */
extern const base16_scheme base16_tarot;

#endif  /* BASE16_tarot_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tarot_IMPLEMENTATION_ONCE
#define BASE16_tarot_IMPLEMENTATION_ONCE

const base16_scheme base16_tarot = {
    .name = "tarot",
    .base = {
        { .r = 14, .g = 9, .b = 29 },
        { .r = 42, .g = 21, .b = 60 },
        { .r = 75, .g = 32, .b = 84 },
        { .r = 116, .g = 49, .b = 107 },
        { .r = 140, .g = 64, .b = 111 },
        { .r = 170, .g = 85, .b = 111 },
        { .r = 196, .g = 104, .b = 109 },
        { .r = 220, .g = 143, .b = 124 },
        { .r = 197, .g = 50, .b = 83 },
        { .r = 234, .g = 77, .b = 96 },
        { .r = 255, .g = 101, .b = 101 },
        { .r = 166, .g = 142, .b = 90 },
        { .r = 140, .g = 151, .b = 133 },
        { .r = 110, .g = 96, .b = 128 },
        { .r = 164, .g = 87, .b = 130 },
        { .r = 152, .g = 77, .b = 81 }
    }
};

#endif  /* BASE16_tarot_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
