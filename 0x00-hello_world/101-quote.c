#include<stdio.h>
#include<errno.h>

/**
 * main - stderr
 *
 * Return: Always 1 (Fail)
 */
int main(void)
{
	errno=-1;
	perror("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
