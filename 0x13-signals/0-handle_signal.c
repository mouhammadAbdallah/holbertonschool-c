#include "signals.h"

/**
 * sig_handler - the handler that prints
 * when signal SIGINT of Ctrl-C is recieved
 * @signo: signal number
 * Return: 0 on success, or -1 on error
 */
void sig_handler(int signo)
{
	printf("Gotcha! [%d]\n", signo);
	fflush(stdout);
}

/**
 * handle_signal - a function that set a handler
 * for the signal SIGINT of Ctrl-C
 *
 * Return: 0 on success, or -1 on error
 */
int handle_signal(void)
{
	if (signal(SIGINT, sig_handler) == SIG_ERR)
		return (-1);
	return (0);
}
