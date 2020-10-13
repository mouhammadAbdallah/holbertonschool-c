#ifndef SIGNALS_H
#define SIGNALS_H

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

typedef void (*sighandler_t)(int);

void print_hello(int);

int handle_signal(void);
void (*current_handler_signal(void))(int);

#endif /* SIGNALS_H */
