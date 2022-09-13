/*
* File: 1-last_digit.c
* Auth:Jar Rassoul
*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints the last digit of a randomly generated number
* and whether it is greater than 5, less than 6, or 0.
*
* Return: Always 0.
*/
int main(void)
{
	int s;

	srand(time(0));
	s = rand() - RAND_MAX / 2;

if ((s % 10) > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n",
			s, s % 10);
}
else if ((s % 10) < 6 && (s % 10) != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n",
			s, s % 10);
}
else
{
	printf("Last digit of %d is %d and is 0\n",
			s, s % 10);
}
return (0);
}

