/*
*File: 0-putchar.c
*AUthor: Jar Rassoul
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
/**
*main-prints _putchar followed by new line
*
*Return: Always 0.
*/
int main(void)
{
	const char msg[] = "_putchar\n";

syscall(SYS_write, 1, msg, 9);
return (0);
}
