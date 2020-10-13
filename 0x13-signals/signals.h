#ifndef SIGNALS_H
#define SIGNALS_H

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef void (*sighandler_t)(int);

void print_hello(int);

int handle_signal(void);
void (*current_handler_signal(void))(int);
int handle_sigaction(void);
void _sa_handler(int signum);

#endif /* SIGNALS_H */
