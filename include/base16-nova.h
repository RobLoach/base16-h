/**
 * Base16 Nova 
 * 
 * @author George Essig (https://github.com/gessig), Trevor D. Miller (https://trevordmiller.com)
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

#ifndef BASE16_nova_H__
#define BASE16_nova_H__

/**
 * The Base16 Nova scheme.
 * 
 * By: George Essig (https://github.com/gessig), Trevor D. Miller (https://trevordmiller.com)
 */
extern const base16_scheme base16_nova;

#endif  /* BASE16_nova_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_nova_IMPLEMENTATION_ONCE
#define BASE16_nova_IMPLEMENTATION_ONCE

const base16_scheme base16_nova = {
    .name = "Nova",
    .base = {
        { .r = 60, .g = 76, .b = 85 },
        { .r = 85, .g = 104, .b = 115 },
        { .r = 106, .g = 125, .b = 137 },
        { .r = 137, .g = 155, .b = 166 },
        { .r = 137, .g = 155, .b = 166 },
        { .r = 197, .g = 212, .b = 221 },
        { .r = 137, .g = 155, .b = 166 },
        { .r = 85, .g = 104, .b = 115 },
        { .r = 131, .g = 175, .b = 229 },
        { .r = 127, .g = 193, .b = 202 },
        { .r = 168, .g = 206, .b = 147 },
        { .r = 127, .g = 193, .b = 202 },
        { .r = 242, .g = 195, .b = 143 },
        { .r = 131, .g = 175, .b = 229 },
        { .r = 154, .g = 147, .b = 225 },
        { .r = 242, .g = 195, .b = 143 }
    }
};

#endif  /* BASE16_nova_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
