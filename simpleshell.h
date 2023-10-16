#ifndef SIMPLESHELL_H
#define SIMPLESHELL_H
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <error.h>
#include <sys/types.h>

char *lookforpath(char *arg);
char *accesspath(char *path, char *arg);
int letprint(char *msg);
int putcharr(char q);
char *strgcopy(char *recv, char *colct);
int sxit(char **eke);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
int strglength(char *str);
int strgcompare(char *found, char *check);

#endif
