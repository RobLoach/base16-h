/**
 * Base16 Zenburn 
 *
 * @author elnawe
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

#ifndef BASE16_zenburn_H__
#define BASE16_zenburn_H__

/**
 * The Base16 Zenburn scheme.
 *
 * @author elnawe
 */
extern const base16_scheme base16_zenburn;

#endif  /* BASE16_zenburn_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_zenburn_IMPLEMENTATION_ONCE
#define BASE16_zenburn_IMPLEMENTATION_ONCE

const base16_scheme base16_zenburn = {
    .name = "Zenburn",
    .base = {
        { .r = 56, .g = 56, .b = 56 },
        { .r = 64, .g = 64, .b = 64 },
        { .r = 96, .g = 96, .b = 96 },
        { .r = 111, .g = 111, .b = 111 },
        { .r = 128, .g = 128, .b = 128 },
        { .r = 220, .g = 220, .b = 204 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 220, .g = 163, .b = 163 },
        { .r = 223, .g = 175, .b = 143 },
        { .r = 224, .g = 207, .b = 159 },
        { .r = 95, .g = 127, .b = 95 },
        { .r = 147, .g = 224, .b = 227 },
        { .r = 124, .g = 184, .b = 187 },
        { .r = 220, .g = 140, .b = 195 },
        { .r = 0, .g = 0, .b = 0 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 56, .g = 56, .b = 56 },
        { .r = 56, .g = 56, .b = 56 },
        { .r = 220, .g = 163, .b = 163 },
        { .r = 224, .g = 207, .b = 159 },
        { .r = 95, .g = 127, .b = 95 },
        { .r = 147, .g = 224, .b = 227 },
        { .r = 124, .g = 184, .b = 187 },
        { .r = 220, .g = 140, .b = 195 }
    },
    .system = 16
};

#endif  /* BASE16_zenburn_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
