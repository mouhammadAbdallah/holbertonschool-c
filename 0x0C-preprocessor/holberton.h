#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

#define P printf
#define M main
#define V void
#define T "Hello, Holberton\n"
#define W V M(V) { P(T); }
W

#endif /* HOLBERTON_H */