/**
 * Base16 Atelier Lakeside Light 
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

#ifndef BASE16_atelier_lakeside_light_H__
#define BASE16_atelier_lakeside_light_H__

/**
 * The Base16 Atelier Lakeside Light scheme.
 *
 * @author Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_lakeside_light;

#endif  /* BASE16_atelier_lakeside_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_lakeside_light_IMPLEMENTATION_ONCE
#define BASE16_atelier_lakeside_light_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_lakeside_light = {
    .name = "Atelier Lakeside Light",
    .base = {
        { .r = 235, .g = 248, .b = 255 },
        { .r = 193, .g = 228, .b = 246 },
        { .r = 126, .g = 162, .b = 180 },
        { .r = 113, .g = 149, .b = 168 },
        { .r = 90, .g = 123, .b = 140 },
        { .r = 81, .g = 109, .b = 123 },
        { .r = 31, .g = 41, .b = 46 },
        { .r = 22, .g = 27, .b = 29 },
        { .r = 210, .g = 45, .b = 114 },
        { .r = 147, .g = 92, .b = 37 },
        { .r = 138, .g = 138, .b = 15 },
        { .r = 86, .g = 140, .b = 59 },
        { .r = 45, .g = 143, .b = 111 },
        { .r = 37, .g = 127, .b = 173 },
        { .r = 107, .g = 107, .b = 184 },
        { .r = 183, .g = 45, .b = 210 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 235, .g = 248, .b = 255 },
        { .r = 235, .g = 248, .b = 255 },
        { .r = 210, .g = 45, .b = 114 },
        { .r = 138, .g = 138, .b = 15 },
        { .r = 86, .g = 140, .b = 59 },
        { .r = 45, .g = 143, .b = 111 },
        { .r = 37, .g = 127, .b = 173 },
        { .r = 107, .g = 107, .b = 184 }
    },
    .system = 16
};

#endif  /* BASE16_atelier_lakeside_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
