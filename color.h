/* Yet another ANSI color header
 * James Sofios
 * May 7, 2020
 */
#pragma once
#include <stdio.h>
#include <stdbool.h>
/* To deactivate colors without changing your source code that
 * you have used either cputs() or cprintf() in, define COLOR to false, or 0.
 * To reactivate color printing, define COLORS to true or 1.
 */

#define COLOR true

#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define BLUE    "\033[1;34m"
#define YELLOW  "\033[01;33m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"
#define RESET   "\033[0m"

#if COLOR
	#define cprintf(color, format, ...) \
		printf(color format RESET __VA_OPT__(,) __VA_ARGS__)

	#define cputs(color, string) \
		printf(color "%s\n" RESET, string)
#else
	#define cprintf(color, format, ...) \
		printf(format __VA_OPT__(,) __VA_ARGS__)

	#define cputs(color, string) \
		puts(string)
#endif
