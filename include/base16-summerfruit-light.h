/**
 * Base16 Summerfruit Light 
 *
 * @author Christopher Corley (http://christop.club/)
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

#ifndef BASE16_summerfruit_light_H__
#define BASE16_summerfruit_light_H__

/**
 * The Base16 Summerfruit Light scheme.
 *
 * @author Christopher Corley (http://christop.club/)
 */
extern const base16_scheme base16_summerfruit_light;

#endif  /* BASE16_summerfruit_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_summerfruit_light_IMPLEMENTATION_ONCE
#define BASE16_summerfruit_light_IMPLEMENTATION_ONCE

const base16_scheme base16_summerfruit_light = {
    .name = "Summerfruit Light",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 208, .g = 208, .b = 208 },
        { .r = 176, .g = 176, .b = 176 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 16, .g = 16, .b = 16 },
        { .r = 21, .g = 21, .b = 21 },
        { .r = 32, .g = 32, .b = 32 },
        { .r = 255, .g = 0, .b = 134 },
        { .r = 253, .g = 137, .b = 0 },
        { .r = 171, .g = 168, .b = 0 },
        { .r = 0, .g = 201, .b = 24 },
        { .r = 31, .g = 170, .b = 170 },
        { .r = 55, .g = 119, .b = 230 },
        { .r = 173, .g = 0, .b = 161 },
        { .r = 204, .g = 102, .b = 51 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 0, .b = 134 },
        { .r = 171, .g = 168, .b = 0 },
        { .r = 0, .g = 201, .b = 24 },
        { .r = 31, .g = 170, .b = 170 },
        { .r = 55, .g = 119, .b = 230 },
        { .r = 173, .g = 0, .b = 161 }
    },
    .system = 16
};

#endif  /* BASE16_summerfruit_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
