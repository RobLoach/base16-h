/**
 * Base16 Shades of Purple 
 *
 * @author Iolar Demartini Junior (http://github.com/demartini), based on Shades of Purple Theme (https://github.com/ahmadawais/shades-of-purple-vscode)
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

#ifndef BASE16_shades_of_purple_H__
#define BASE16_shades_of_purple_H__

/**
 * The Base16 Shades of Purple scheme.
 *
 * @author Iolar Demartini Junior (http://github.com/demartini), based on Shades of Purple Theme (https://github.com/ahmadawais/shades-of-purple-vscode)
 */
extern const base16_scheme base16_shades_of_purple;

#endif  /* BASE16_shades_of_purple_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_shades_of_purple_IMPLEMENTATION_ONCE
#define BASE16_shades_of_purple_IMPLEMENTATION_ONCE

const base16_scheme base16_shades_of_purple = {
    .name = "Shades of Purple",
    .base = {
        { .r = 30, .g = 30, .b = 63 },
        { .r = 67, .g = 212, .b = 38 },
        { .r = 241, .g = 208, .b = 0 },
        { .r = 128, .g = 128, .b = 128 },
        { .r = 104, .g = 113, .b = 255 },
        { .r = 199, .g = 199, .b = 199 },
        { .r = 255, .g = 119, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 217, .g = 4, .b = 41 },
        { .r = 249, .g = 42, .b = 28 },
        { .r = 255, .g = 231, .b = 0 },
        { .r = 58, .g = 217, .b = 0 },
        { .r = 0, .g = 197, .b = 199 },
        { .r = 105, .g = 67, .b = 255 },
        { .r = 255, .g = 44, .b = 112 },
        { .r = 121, .g = 232, .b = 251 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 30, .g = 30, .b = 63 },
        { .r = 30, .g = 30, .b = 63 },
        { .r = 217, .g = 4, .b = 41 },
        { .r = 255, .g = 231, .b = 0 },
        { .r = 58, .g = 217, .b = 0 },
        { .r = 0, .g = 197, .b = 199 },
        { .r = 105, .g = 67, .b = 255 },
        { .r = 255, .g = 44, .b = 112 }
    },
    .system = 16
};

#endif  /* BASE16_shades_of_purple_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
