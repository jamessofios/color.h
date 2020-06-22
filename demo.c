#include "color.h"

int main(void)
{
	int n = 22;
	char* s = "Hello!";
	float f = 10.2;
	char* a = "The demo is working!";
	cputs(GREEN, "This is green!");
	cputs(BLUE, s);
	cputs(MAGENTA, "Greetings!");
	cprintf(CYAN, "%.1f %d\n", f, n);
	cprintf(YELLOW, "%.1f testing! %d\n", f, n);
	cprintf(RED, "%.1f %d %s\n", f, n, s);
	cputs(RED, a);
	cputs(BLUE, a);
	cputs(GREEN, a);
	return 0;
}
