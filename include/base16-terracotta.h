/**
 * Base16 Terracotta 
 *
 * @author Alexander Rossell Hayes (https://github.com/rossellhayes)
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

#ifndef BASE16_terracotta_H__
#define BASE16_terracotta_H__

/**
 * The Base16 Terracotta scheme.
 *
 * @author Alexander Rossell Hayes (https://github.com/rossellhayes)
 */
extern const base16_scheme base16_terracotta;

#endif  /* BASE16_terracotta_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_terracotta_IMPLEMENTATION_ONCE
#define BASE16_terracotta_IMPLEMENTATION_ONCE

const base16_scheme base16_terracotta = {
    .name = "Terracotta",
    .base = {
        { .r = 239, .g = 234, .b = 232 },
        { .r = 223, .g = 214, .b = 209 },
        { .r = 208, .g = 193, .b = 187 },
        { .r = 192, .g = 172, .b = 164 },
        { .r = 89, .g = 69, .b = 61 },
        { .r = 71, .g = 55, .b = 49 },
        { .r = 53, .g = 42, .b = 37 },
        { .r = 36, .g = 28, .b = 25 },
        { .r = 167, .g = 80, .b = 69 },
        { .r = 189, .g = 105, .b = 66 },
        { .r = 206, .g = 148, .b = 62 },
        { .r = 122, .g = 137, .b = 74 },
        { .r = 132, .g = 127, .b = 158 },
        { .r = 98, .g = 85, .b = 116 },
        { .r = 141, .g = 89, .b = 104 },
        { .r = 176, .g = 113, .b = 88 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 239, .g = 234, .b = 232 },
        { .r = 239, .g = 234, .b = 232 },
        { .r = 167, .g = 80, .b = 69 },
        { .r = 206, .g = 148, .b = 62 },
        { .r = 122, .g = 137, .b = 74 },
        { .r = 132, .g = 127, .b = 158 },
        { .r = 98, .g = 85, .b = 116 },
        { .r = 141, .g = 89, .b = 104 }
    },
    .system = 16
};

#endif  /* BASE16_terracotta_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
