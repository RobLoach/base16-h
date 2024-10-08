/**
 * Base16 Atelier Heath 
 *
 * @author Bram de Haan (http://atelierbramdehaan.nl)
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

#ifndef BASE16_atelier_heath_H__
#define BASE16_atelier_heath_H__

/**
 * The Base16 Atelier Heath scheme.
 *
 * @author Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_heath;

#endif  /* BASE16_atelier_heath_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_heath_IMPLEMENTATION_ONCE
#define BASE16_atelier_heath_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_heath = {
    .name = "Atelier Heath",
    .base = {
        { .r = 27, .g = 24, .b = 27 },
        { .r = 41, .g = 35, .b = 41 },
        { .r = 105, .g = 93, .b = 105 },
        { .r = 119, .g = 105, .b = 119 },
        { .r = 158, .g = 143, .b = 158 },
        { .r = 171, .g = 155, .b = 171 },
        { .r = 216, .g = 202, .b = 216 },
        { .r = 247, .g = 243, .b = 247 },
        { .r = 202, .g = 64, .b = 43 },
        { .r = 166, .g = 89, .b = 38 },
        { .r = 187, .g = 138, .b = 53 },
        { .r = 145, .g = 139, .b = 59 },
        { .r = 21, .g = 147, .b = 147 },
        { .r = 81, .g = 106, .b = 236 },
        { .r = 123, .g = 89, .b = 192 },
        { .r = 204, .g = 51, .b = 204 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 27, .g = 24, .b = 27 },
        { .r = 27, .g = 24, .b = 27 },
        { .r = 202, .g = 64, .b = 43 },
        { .r = 187, .g = 138, .b = 53 },
        { .r = 145, .g = 139, .b = 59 },
        { .r = 21, .g = 147, .b = 147 },
        { .r = 81, .g = 106, .b = 236 },
        { .r = 123, .g = 89, .b = 192 }
    },
    .system = 16
};

#endif  /* BASE16_atelier_heath_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
