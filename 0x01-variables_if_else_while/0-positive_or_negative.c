/*
 * File: 0-positive_or_negative.c
 * Auth: jar Rassoul
 */
#include <time.h>
#include <stdlib.h>

/**
 * main-function will print random and tell if it's positive,
 * negative or zero
 *
 * and it Returns 0 always
 */
int main(void)
{
	
	srand(time(NULL));   // Initialization, should only be called once.
	int x = rand();

	if (x > 0)
		printf("%d is positive\n", x);
	else if (x < 0)
		printf("%d is negative\n", x);
	else
		printf("%d is zero\n", x);
	return 0;
}


