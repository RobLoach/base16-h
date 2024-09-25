/**
 * Base16 emil 
 *
 * @author limelier
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

#ifndef BASE16_emil_H__
#define BASE16_emil_H__

/**
 * The Base16 emil scheme.
 *
 * @author limelier
 */
extern const base16_scheme base16_emil;

#endif  /* BASE16_emil_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_emil_IMPLEMENTATION_ONCE
#define BASE16_emil_IMPLEMENTATION_ONCE

const base16_scheme base16_emil = {
    .name = "emil",
    .base = {
        { .r = 239, .g = 239, .b = 239 },
        { .r = 190, .g = 190, .b = 210 },
        { .r = 158, .g = 158, .b = 175 },
        { .r = 124, .g = 124, .b = 152 },
        { .r = 80, .g = 80, .b = 99 },
        { .r = 49, .g = 49, .b = 69 },
        { .r = 34, .g = 34, .b = 58 },
        { .r = 26, .g = 26, .b = 47 },
        { .r = 244, .g = 57, .b = 121 },
        { .r = 210, .g = 42, .b = 139 },
        { .r = 255, .g = 102, .b = 155 },
        { .r = 0, .g = 115, .b = 168 },
        { .r = 33, .g = 85, .b = 214 },
        { .r = 71, .g = 19, .b = 151 },
        { .r = 105, .g = 22, .b = 182 },
        { .r = 141, .g = 23, .b = 165 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 239, .g = 239, .b = 239 },
        { .r = 239, .g = 239, .b = 239 },
        { .r = 244, .g = 57, .b = 121 },
        { .r = 255, .g = 102, .b = 155 },
        { .r = 0, .g = 115, .b = 168 },
        { .r = 33, .g = 85, .b = 214 },
        { .r = 71, .g = 19, .b = 151 },
        { .r = 105, .g = 22, .b = 182 }
    },
    .system = 16
};

#endif  /* BASE16_emil_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
