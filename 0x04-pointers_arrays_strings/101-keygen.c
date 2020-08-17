#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - crackme
 *
 * Return: 0 success
 */
int main(void)
{
	char pass[100];
	int randNum, num, i;

	num = 0;
	i = 0;
	srand(time(NULL));
	while (num < 2645)
	{
		randNum = random() % 127;
		if (randNum > 32)
		{
			pass[i++] = randNum;
			num += randNum;
		}
	}
	pass[i++] = (2772 - num);
	pass[i] = '\0';
	printf("%s", pass);

	return (0);
}
