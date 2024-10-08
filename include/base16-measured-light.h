/**
 * Base16 Measured Light 
 *
 * @author Measured (https://measured.co)
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

#ifndef BASE16_measured_light_H__
#define BASE16_measured_light_H__

/**
 * The Base16 Measured Light scheme.
 *
 * @author Measured (https://measured.co)
 */
extern const base16_scheme base16_measured_light;

#endif  /* BASE16_measured_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_measured_light_IMPLEMENTATION_ONCE
#define BASE16_measured_light_IMPLEMENTATION_ONCE

const base16_scheme base16_measured_light = {
    .name = "Measured Light",
    .base = {
        { .r = 253, .g = 249, .b = 245 },
        { .r = 249, .g = 245, .b = 241 },
        { .r = 255, .g = 234, .b = 218 },
        { .r = 90, .g = 90, .b = 90 },
        { .r = 64, .g = 64, .b = 64 },
        { .r = 41, .g = 41, .b = 41 },
        { .r = 24, .g = 24, .b = 24 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 172, .g = 31, .b = 53 },
        { .r = 173, .g = 86, .b = 1 },
        { .r = 100, .g = 90, .b = 0 },
        { .r = 12, .g = 104, .b = 12 },
        { .r = 1, .g = 113, .b = 111 },
        { .r = 1, .g = 88, .b = 173 },
        { .r = 102, .g = 69, .b = 194 },
        { .r = 168, .g = 26, .b = 102 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 253, .g = 249, .b = 245 },
        { .r = 253, .g = 249, .b = 245 },
        { .r = 172, .g = 31, .b = 53 },
        { .r = 100, .g = 90, .b = 0 },
        { .r = 12, .g = 104, .b = 12 },
        { .r = 1, .g = 113, .b = 111 },
        { .r = 1, .g = 88, .b = 173 },
        { .r = 102, .g = 69, .b = 194 }
    },
    .system = 16
};

#endif  /* BASE16_measured_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
