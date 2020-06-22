CC=gcc
CFLAGS=
.PHONY=all clean
all: demo
demo: demo.c color.h
	$(CC) $(CFLAGS) -o $@ $<
clean:
	$(RM) demo
