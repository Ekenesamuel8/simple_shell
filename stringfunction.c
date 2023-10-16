#include "simpleshell.h"

/*char *strgcopy(char **recv, char **colct)
{
	int r = 0, q = 0;

	for (q = 0; colct[q]; q++)
		q++;
	q +=_strlen{colct}; 

	for(r = 0; r < q; r++)
		recv[r] = colct[r];

	recv[r] = '\0';
	return(recv);
}


char *_strcpy(char *dest, char *src)
{
        int l = 0;
	        int x = 0;

		        while (*(src + l) != '\0')
			        {
				                l++;
						        }
							        for ( ; x < l ; x++)
								        {
									                dest[x] = src[x];
											        }
												        dest[l] = '\0';
													        return (dest);
														}*/


/**
 * _strlen - return the lenght of the string
  * @s: string
   * Return: longi
    */
int strglength(char *str)
{
	int longi = 0;

	while (*str != '\0')
	{
		longi++;
		str++;
	}

	return (longi);
}

int strgcompare(char *found, char *check)
{
	int q;

	for(q = 0; found[q] != '\0' || check[q] != '\0'; q++)
	{
		if (found[q] != check[q])
			break;
		else
			return 0;

	}

}

/*int main(void)
{
	char dd[] = "young";
	char ff[] = "yo";
	int we = 0;
	printf("ff is: %s", ff);
	strgcopy(dd, ff);
	printf("dd is : %s", dd);

	go = strglength(dd);
	printf("%d/n", go);
	we = strgcompare(dd, ff);
	printf("%d\n", we);
	return 0;

}*/
