/**
 * Base16 Blueish 
 *
 * @author Ben Mayoras
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

#ifndef BASE16_blueish_H__
#define BASE16_blueish_H__

/**
 * The Base16 Blueish scheme.
 *
 * @author Ben Mayoras
 */
extern const base16_scheme base16_blueish;

#endif  /* BASE16_blueish_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_blueish_IMPLEMENTATION_ONCE
#define BASE16_blueish_IMPLEMENTATION_ONCE

const base16_scheme base16_blueish = {
    .name = "Blueish",
    .base = {
        { .r = 24, .g = 36, .b = 48 },
        { .r = 36, .g = 60, .b = 84 },
        { .r = 70, .g = 41, .b = 10 },
        { .r = 97, .g = 109, .b = 120 },
        { .r = 116, .g = 175, .b = 231 },
        { .r = 200, .g = 225, .b = 248 },
        { .r = 221, .g = 234, .b = 246 },
        { .r = 143, .g = 152, .b = 160 },
        { .r = 76, .g = 229, .b = 135 },
        { .r = 246, .g = 168, .b = 92 },
        { .r = 130, .g = 170, .b = 255 },
        { .r = 195, .g = 232, .b = 141 },
        { .r = 95, .g = 209, .b = 255 },
        { .r = 130, .g = 170, .b = 255 },
        { .r = 255, .g = 132, .b = 221 },
        { .r = 187, .g = 210, .b = 232 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 24, .g = 36, .b = 48 },
        { .r = 24, .g = 36, .b = 48 },
        { .r = 76, .g = 229, .b = 135 },
        { .r = 130, .g = 170, .b = 255 },
        { .r = 195, .g = 232, .b = 141 },
        { .r = 95, .g = 209, .b = 255 },
        { .r = 130, .g = 170, .b = 255 },
        { .r = 255, .g = 132, .b = 221 }
    },
    .system = 16
};

#endif  /* BASE16_blueish_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
