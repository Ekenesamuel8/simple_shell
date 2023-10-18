#include "simpleshell.h"
/**
* accesspath - it concatinat the path with '/' and the next argument
* and also check for the executable file if it exist
* @path: the PATH environ
* @arg: argument it receives
* Return: NULL if not successful and return the executable when successful
*/
char *accesspath(char *path, char *arg)
{
	char *acpath, *aptoken, *fpath;
	char *dilm = ":";

	acpath = strdup(path);
	aptoken = strtok(acpath, dilm);

	while (aptoken != NULL)
	{
		fpath = malloc(strglength(arg) + strglength(aptoken) + 2);
		strcpy(fpath, aptoken);
		strcat(fpath, "/");
		strcat(fpath, arg);

		if (access(fpath, X_OK) == 0)
		{
			free(acpath);
			return (fpath);
		}
		aptoken = strtok(NULL, dilm);
		free(fpath);
	}
	free(acpath);
	return (NULL);
}
/**
* lookforpath - this get the PATH environ
* @arg: argument it receives
* Return: NULL if not successful
*/
char *lookforpath(char *arg)
{
	char *get;

	if (access(arg, X_OK) == 0)
		return (arg);
	get = getenv("PATH");

	if (get)
	{
		get = accesspath(get, arg);
		return (get);
	}
	return (NULL);
}
