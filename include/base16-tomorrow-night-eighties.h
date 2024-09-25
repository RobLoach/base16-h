/**
 * Base16 Tomorrow Night Eighties 
 *
 * @author Chris Kempson (http://chriskempson.com)
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

#ifndef BASE16_tomorrow_night_eighties_H__
#define BASE16_tomorrow_night_eighties_H__

/**
 * The Base16 Tomorrow Night Eighties scheme.
 *
 * @author Chris Kempson (http://chriskempson.com)
 */
extern const base16_scheme base16_tomorrow_night_eighties;

#endif  /* BASE16_tomorrow_night_eighties_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tomorrow_night_eighties_IMPLEMENTATION_ONCE
#define BASE16_tomorrow_night_eighties_IMPLEMENTATION_ONCE

const base16_scheme base16_tomorrow_night_eighties = {
    .name = "Tomorrow Night Eighties",
    .base = {
        { .r = 45, .g = 45, .b = 45 },
        { .r = 57, .g = 57, .b = 57 },
        { .r = 81, .g = 81, .b = 81 },
        { .r = 153, .g = 153, .b = 153 },
        { .r = 180, .g = 183, .b = 180 },
        { .r = 204, .g = 204, .b = 204 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 242, .g = 119, .b = 122 },
        { .r = 249, .g = 145, .b = 87 },
        { .r = 255, .g = 204, .b = 102 },
        { .r = 153, .g = 204, .b = 153 },
        { .r = 102, .g = 204, .b = 204 },
        { .r = 102, .g = 153, .b = 204 },
        { .r = 204, .g = 153, .b = 204 },
        { .r = 163, .g = 104, .b = 90 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 45, .g = 45, .b = 45 },
        { .r = 45, .g = 45, .b = 45 },
        { .r = 242, .g = 119, .b = 122 },
        { .r = 255, .g = 204, .b = 102 },
        { .r = 153, .g = 204, .b = 153 },
        { .r = 102, .g = 204, .b = 204 },
        { .r = 102, .g = 153, .b = 204 },
        { .r = 204, .g = 153, .b = 204 }
    },
    .system = 16
};

#endif  /* BASE16_tomorrow_night_eighties_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
