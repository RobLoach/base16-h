/**
 * Base16 Cupertino 
 *
 * @author Defman21
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

#ifndef BASE16_cupertino_H__
#define BASE16_cupertino_H__

/**
 * The Base16 Cupertino scheme.
 *
 * @author Defman21
 */
extern const base16_scheme base16_cupertino;

#endif  /* BASE16_cupertino_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_cupertino_IMPLEMENTATION_ONCE
#define BASE16_cupertino_IMPLEMENTATION_ONCE

const base16_scheme base16_cupertino = {
    .name = "Cupertino",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 128, .g = 128, .b = 128 },
        { .r = 128, .g = 128, .b = 128 },
        { .r = 64, .g = 64, .b = 64 },
        { .r = 64, .g = 64, .b = 64 },
        { .r = 94, .g = 94, .b = 94 },
        { .r = 196, .g = 26, .b = 21 },
        { .r = 235, .g = 133, .b = 0 },
        { .r = 130, .g = 107, .b = 40 },
        { .r = 0, .g = 116, .b = 0 },
        { .r = 49, .g = 132, .b = 149 },
        { .r = 0, .g = 0, .b = 255 },
        { .r = 169, .g = 13, .b = 145 },
        { .r = 130, .g = 107, .b = 40 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 196, .g = 26, .b = 21 },
        { .r = 130, .g = 107, .b = 40 },
        { .r = 0, .g = 116, .b = 0 },
        { .r = 49, .g = 132, .b = 149 },
        { .r = 0, .g = 0, .b = 255 },
        { .r = 169, .g = 13, .b = 145 }
    },
    .system = 16
};

#endif  /* BASE16_cupertino_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
