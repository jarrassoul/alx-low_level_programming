/*
*File: 0-putchar.c
*AUthor: Jar Rassoul
*/
#include <unistd.h>
#include "main.h"
/**
*main-prints _putchar followed by new line.
*Description : prints_putchar
*
*Return: Always 0.
*/
int main(void)
{
	char word[] = "_putchar\n";

	write(1, word, 9);
	return (0);
}
