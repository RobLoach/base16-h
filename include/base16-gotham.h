/**
 * Base16 Gotham 
 *
 * @author Andrea Leopardi (arranged by Brett Jones)
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

#ifndef BASE16_gotham_H__
#define BASE16_gotham_H__

/**
 * The Base16 Gotham scheme.
 *
 * @author Andrea Leopardi (arranged by Brett Jones)
 */
extern const base16_scheme base16_gotham;

#endif  /* BASE16_gotham_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_gotham_IMPLEMENTATION_ONCE
#define BASE16_gotham_IMPLEMENTATION_ONCE

const base16_scheme base16_gotham = {
    .name = "Gotham",
    .base = {
        { .r = 12, .g = 16, .b = 20 },
        { .r = 17, .g = 21, .b = 28 },
        { .r = 9, .g = 31, .b = 46 },
        { .r = 10, .g = 55, .b = 73 },
        { .r = 36, .g = 83, .b = 97 },
        { .r = 89, .g = 156, .b = 171 },
        { .r = 153, .g = 209, .b = 206 },
        { .r = 211, .g = 235, .b = 233 },
        { .r = 194, .g = 49, .b = 39 },
        { .r = 210, .g = 105, .b = 55 },
        { .r = 237, .g = 180, .b = 67 },
        { .r = 51, .g = 133, .b = 158 },
        { .r = 42, .g = 168, .b = 137 },
        { .r = 25, .g = 84, .b = 102 },
        { .r = 136, .g = 140, .b = 166 },
        { .r = 78, .g = 81, .b = 102 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 12, .g = 16, .b = 20 },
        { .r = 12, .g = 16, .b = 20 },
        { .r = 194, .g = 49, .b = 39 },
        { .r = 237, .g = 180, .b = 67 },
        { .r = 51, .g = 133, .b = 158 },
        { .r = 42, .g = 168, .b = 137 },
        { .r = 25, .g = 84, .b = 102 },
        { .r = 136, .g = 140, .b = 166 }
    },
    .system = 16
};

#endif  /* BASE16_gotham_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
