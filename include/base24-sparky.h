/**
 * Base24 Sparky 
 *
 * @author Leila Sother (https://github.com/mixcoac)
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

#ifndef BASE16_sparky_H__
#define BASE16_sparky_H__

/**
 * The Base24 Sparky scheme.
 *
 * @author Leila Sother (https://github.com/mixcoac)
 */
extern const base16_scheme base24_sparky;

#endif  /* BASE16_sparky_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_sparky_IMPLEMENTATION_ONCE
#define BASE24_sparky_IMPLEMENTATION_ONCE

const base16_scheme base24_sparky = {
    .name = "Sparky",
    .base = {
        { .r = 7, .g = 43, .b = 49 },
        { .r = 0, .g = 49, .b = 60 },
        { .r = 0, .g = 60, .b = 70 },
        { .r = 0, .g = 59, .b = 73 },
        { .r = 0, .g = 119, .b = 139 },
        { .r = 244, .g = 245, .b = 240 },
        { .r = 245, .g = 245, .b = 241 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 88, .b = 93 },
        { .r = 255, .g = 143, .b = 28 },
        { .r = 251, .g = 221, .b = 64 },
        { .r = 120, .g = 214, .b = 75 },
        { .r = 45, .g = 204, .b = 211 },
        { .r = 70, .g = 152, .b = 203 },
        { .r = 213, .g = 158, .b = 215 },
        { .r = 155, .g = 112, .b = 77 },

        /* Base24 */
        { .r = 75, .g = 79, .b = 84 },
        { .r = 33, .g = 35, .b = 34 },
        { .r = 255, .g = 114, .b = 118 },
        { .r = 246, .g = 235, .b = 97 },
        { .r = 142, .g = 221, .b = 101 },
        { .r = 0, .g = 193, .b = 213 },
        { .r = 105, .g = 179, .b = 231 },
        { .r = 249, .g = 159, .b = 201 }
    },
    .system = 24
};

#endif  /* BASE24_sparky_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
