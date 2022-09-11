/*
 * File: 0-positive_or_negative.c
 * Auth: jar Rassoul
 */
#include <stdio.h>
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
        int n;	
	srand(time(0));   // Initialization, should only be called once.
        n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}


