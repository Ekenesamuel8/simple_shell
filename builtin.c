#include "simpleshell.h"
/**
*sxit - cheack for ue
*@eke: kdskk
*Return: 1 for success and 0 if NULL
*/
int sxit(char **eke)
{
	char buff[1024];
	char *update, *statpassed;
	int exitstat = 0;

	if (strcmp(eke[0], "exit") == 0)
	{
		if (eke[1] == NULL)
			exit(exitstat);
		else
		{
			statpassed = eke[1];
			exitstat = atoi(statpassed);
			exit(exitstat);
		}
	}
	else if (strcmp(eke[0], "cd") == 0)
	{
		if(eke[1] == NULL)
		{
			chdir(getenv("HOME"));
			getcwd(buff, 1024);
			update = getenv("PWD");
			setenv("OLDPWD", update, 1);
			setenv("PWD", buff, 1);
		}
		else if	(strcmp(eke[1], "-") == 0)
		{
			chdir(getenv("OLDPWD"));
			getcwd(buff, 1024);
			update = getenv("PWD");
			setenv("OLDPWD", update, 1);
			setenv("PWD", buff, 1);
		}
		else
		{
			if(chdir(eke[1]) != 0)
				fprintf(stderr, "./hsh: 1: cd: can't cd to %s\n", eke[1]);
			getcwd(buff, 1024);
			update = getenv("PWD");
			setenv("OLDPWD", update, 1);
			setenv("PWD", buff, 1);
		}
		return (1);
	}
	return (0);
}
