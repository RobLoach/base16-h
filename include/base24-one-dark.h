/**
 * Base24 One Dark 
 *
 * @author FredHappyface (https://github.com/fredHappyface)
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

#ifndef BASE16_one_dark_H__
#define BASE16_one_dark_H__

/**
 * The Base24 One Dark scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_one_dark;

#endif  /* BASE16_one_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_one_dark_IMPLEMENTATION_ONCE
#define BASE24_one_dark_IMPLEMENTATION_ONCE

const base16_scheme base24_one_dark = {
    .name = "One Dark",
    .base = {
        { .r = 40, .g = 44, .b = 52 },
        { .r = 63, .g = 68, .b = 81 },
        { .r = 79, .g = 86, .b = 102 },
        { .r = 84, .g = 88, .b = 98 },
        { .r = 145, .g = 150, .b = 161 },
        { .r = 171, .g = 178, .b = 191 },
        { .r = 230, .g = 230, .b = 230 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 224, .g = 85, .b = 97 },
        { .r = 209, .g = 143, .b = 82 },
        { .r = 230, .g = 185, .b = 101 },
        { .r = 140, .g = 194, .b = 101 },
        { .r = 66, .g = 179, .b = 194 },
        { .r = 74, .g = 165, .b = 240 },
        { .r = 193, .g = 98, .b = 222 },
        { .r = 191, .g = 64, .b = 52 },

        /* Base24 */
        { .r = 33, .g = 37, .b = 43 },
        { .r = 24, .g = 26, .b = 31 },
        { .r = 255, .g = 97, .b = 110 },
        { .r = 240, .g = 164, .b = 93 },
        { .r = 165, .g = 224, .b = 117 },
        { .r = 76, .g = 209, .b = 224 },
        { .r = 77, .g = 196, .b = 255 },
        { .r = 222, .g = 115, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_one_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
