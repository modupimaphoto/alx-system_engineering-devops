#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

/**
 * infinite_while - execute forever
 *
 * Return: Always 0
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
/**
 * main - entry point
 *
 * Return:  Always 0
 */
int main(void)
{
	int child_processes = 0;
	pid_t pid;

	while (child_processes < 5)
	{
		pid = fork();
		if (!pid)
			break;
		printf("Zombie process created, PID: %i\n", (int)pid);
		child_processes++;
	}
	if (pid != 0)
		infinite_while();
	return (0);
}
