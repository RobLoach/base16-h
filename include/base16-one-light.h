/**
 * Base16 One Light 
 *
 * @author Daniel Pfeifer (http://github.com/purpleKarrot)
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

#ifndef BASE16_one_light_H__
#define BASE16_one_light_H__

/**
 * The Base16 One Light scheme.
 *
 * @author Daniel Pfeifer (http://github.com/purpleKarrot)
 */
extern const base16_scheme base16_one_light;

#endif  /* BASE16_one_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_one_light_IMPLEMENTATION_ONCE
#define BASE16_one_light_IMPLEMENTATION_ONCE

const base16_scheme base16_one_light = {
    .name = "One Light",
    .base = {
        { .r = 250, .g = 250, .b = 250 },
        { .r = 240, .g = 240, .b = 241 },
        { .r = 229, .g = 229, .b = 230 },
        { .r = 160, .g = 161, .b = 167 },
        { .r = 105, .g = 108, .b = 119 },
        { .r = 56, .g = 58, .b = 66 },
        { .r = 32, .g = 34, .b = 39 },
        { .r = 9, .g = 10, .b = 11 },
        { .r = 202, .g = 18, .b = 67 },
        { .r = 215, .g = 95, .b = 0 },
        { .r = 193, .g = 132, .b = 1 },
        { .r = 80, .g = 161, .b = 79 },
        { .r = 1, .g = 132, .b = 188 },
        { .r = 64, .g = 120, .b = 242 },
        { .r = 166, .g = 38, .b = 164 },
        { .r = 152, .g = 104, .b = 1 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 250, .g = 250, .b = 250 },
        { .r = 250, .g = 250, .b = 250 },
        { .r = 202, .g = 18, .b = 67 },
        { .r = 193, .g = 132, .b = 1 },
        { .r = 80, .g = 161, .b = 79 },
        { .r = 1, .g = 132, .b = 188 },
        { .r = 64, .g = 120, .b = 242 },
        { .r = 166, .g = 38, .b = 164 }
    },
    .system = 16
};

#endif  /* BASE16_one_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
