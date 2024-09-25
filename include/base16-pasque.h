/**
 * Base16 Pasque 
 *
 * @author Gabriel Fontes (https://github.com/Misterio77)
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

#ifndef BASE16_pasque_H__
#define BASE16_pasque_H__

/**
 * The Base16 Pasque scheme.
 *
 * @author Gabriel Fontes (https://github.com/Misterio77)
 */
extern const base16_scheme base16_pasque;

#endif  /* BASE16_pasque_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_pasque_IMPLEMENTATION_ONCE
#define BASE16_pasque_IMPLEMENTATION_ONCE

const base16_scheme base16_pasque = {
    .name = "Pasque",
    .base = {
        { .r = 39, .g = 28, .b = 58 },
        { .r = 16, .g = 3, .b = 35 },
        { .r = 62, .g = 45, .b = 92 },
        { .r = 93, .g = 87, .b = 102 },
        { .r = 190, .g = 188, .b = 191 },
        { .r = 222, .g = 220, .b = 223 },
        { .r = 237, .g = 234, .b = 239 },
        { .r = 187, .g = 170, .b = 221 },
        { .r = 169, .g = 34, .b = 88 },
        { .r = 145, .g = 136, .b = 137 },
        { .r = 128, .g = 78, .b = 173 },
        { .r = 198, .g = 145, .b = 75 },
        { .r = 114, .g = 99, .b = 170 },
        { .r = 142, .g = 125, .b = 198 },
        { .r = 149, .g = 59, .b = 157 },
        { .r = 89, .g = 50, .b = 92 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 39, .g = 28, .b = 58 },
        { .r = 39, .g = 28, .b = 58 },
        { .r = 169, .g = 34, .b = 88 },
        { .r = 128, .g = 78, .b = 173 },
        { .r = 198, .g = 145, .b = 75 },
        { .r = 114, .g = 99, .b = 170 },
        { .r = 142, .g = 125, .b = 198 },
        { .r = 149, .g = 59, .b = 157 }
    },
    .system = 16
};

#endif  /* BASE16_pasque_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
