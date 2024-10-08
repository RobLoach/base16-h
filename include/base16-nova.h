/**
 * Base16 Nova 
 *
 * @author George Essig (https://github.com/gessig), Trevor D. Miller (https://trevordmiller.com)
 *
 * Template by Rob Loach (https://robloach.net)
 * base16-c: https://github.com/RobLoach/base16-c
 *
 * License: MIT
 *
 * Copyright (c) 2024 Rob Loach (https://robloach.net)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef BASE16_COLOR_H__
#define BASE16_COLOR_H__

/**
 * A single color used for Base16 or Base24.
 */
typedef struct base16_color {
    unsigned char r; /** Red channel */
    unsigned char g; /** Green channel */
    unsigned char b; /** Blue channel */
} base16_color;

#endif /* BASE16_COLOR_H__ */

#ifndef BASE16_SCHEME_H__
#define BASE16_SCHEME_H__

/**
 * A Base16 Scheme.
 */
typedef struct base16_scheme {
    const char *name; /** The name of the scheme. */
    base16_color base[24]; /** An array of the base16 colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE16_nova_H__
#define BASE16_nova_H__

/**
 * The Base16 Nova scheme.
 *
 * @author George Essig (https://github.com/gessig), Trevor D. Miller (https://trevordmiller.com)
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
        { .r = 242, .g = 195, .b = 143 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 60, .g = 76, .b = 85 },
        { .r = 60, .g = 76, .b = 85 },
        { .r = 131, .g = 175, .b = 229 },
        { .r = 168, .g = 206, .b = 147 },
        { .r = 127, .g = 193, .b = 202 },
        { .r = 242, .g = 195, .b = 143 },
        { .r = 131, .g = 175, .b = 229 },
        { .r = 154, .g = 147, .b = 225 }
    },
    .system = 16
};

#endif  /* BASE16_nova_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
