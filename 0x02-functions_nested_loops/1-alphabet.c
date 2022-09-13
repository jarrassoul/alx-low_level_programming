/*
 * File: 1-alphabet.c
 * Author: Jar Rassoul
 */
#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * main prints alphabets in lower case.
 *
 * Return Always 0.
 */
void print_alphabet(void);

int main(void)
{ 

	char l;

	for (l ='a'; l <= 'z'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
