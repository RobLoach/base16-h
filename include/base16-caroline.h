/**
 * Base16 caroline 
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

#ifndef BASE16_caroline_H__
#define BASE16_caroline_H__

/**
 * The Base16 caroline scheme.
 * 
 * By: ed (https://codeberg.org/ed)
 */
extern const base16_scheme base16_caroline;

#endif  /* BASE16_caroline_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_caroline_IMPLEMENTATION_ONCE
#define BASE16_caroline_IMPLEMENTATION_ONCE

const base16_scheme base16_caroline = {
    .name = "caroline",
    .base = {
        { .r = 28, .g = 18, .b = 19 },
        { .r = 58, .g = 36, .b = 37 },
        { .r = 86, .g = 56, .b = 55 },
        { .r = 109, .g = 71, .b = 69 },
        { .r = 139, .g = 93, .b = 87 },
        { .r = 168, .g = 117, .b = 105 },
        { .r = 197, .g = 141, .b = 123 },
        { .r = 227, .g = 166, .b = 140 },
        { .r = 194, .g = 79, .b = 87 },
        { .r = 166, .g = 54, .b = 80 },
        { .r = 242, .g = 129, .b = 113 },
        { .r = 128, .g = 108, .b = 97 },
        { .r = 107, .g = 101, .b = 102 },
        { .r = 104, .g = 76, .b = 89 },
        { .r = 166, .g = 54, .b = 80 },
        { .r = 137, .g = 63, .b = 69 }
    }
};

#endif  /* BASE16_caroline_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
