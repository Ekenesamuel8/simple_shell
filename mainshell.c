#include "simpleshell.h"
/**
* main - creates new custom shell terminal
* @ac: count the number of argument
* @environ: the environment variable
* @argv: unused
* Return: 0 for success
*/
int main(int ac, char **argv, char **environ)
{
	char *buffload = NULL, *eke[1024], *delim = " \n", *pat;
	size_t buffnum = 0;
	ssize_t get;
	int w, status;
	pid_t dupprogram;
	(void)ac;
	(void)argv;

	while (1)
	{
	if (isatty(0))
	{
		letprint("smile$ ");
	}
		get = getline(&buffload, &buffnum, stdin);

		if (get == -1)
		{
			free(buffload);
			exit(0);
		}
		w = 0;
		eke[w] = strtok(buffload, delim);
		while (eke[w])
		{
			eke[++w] = strtok(NULL, delim);
		}
		if (eke[0] == NULL)
			continue;
		if (sxit(eke) == 1)
			continue;

		pat = lookforpath(eke[0]);
		if (pat == NULL)
		{
			perror("error");
			continue;
		}
		dupprogram = fork();
		if (dupprogram == 0)
		{
			if (execve(pat, eke, environ) == -1)
			{
				letprint("command not found\n");
				exit(0);
			}
		}
		else if (dupprogram < 0)
		{
			letprint("error occur\n");
			exit(0);
		}
		else
			wait(&status);
	}
	free(eke);
	free(buffload);
	return (0);
}
