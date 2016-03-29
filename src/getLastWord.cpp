/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str)
{
	char *sub = NULL;
	sub = (char*)malloc(0 * sizeof(char));
	int len = 0, i = 0, w = 0, space = 0, c = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	i = len - 1;
	while (i >= 0)
	{
		if (str[i] == 32 && w == 0)
		{
			space++;
			i--;
		}
		else if (str[i] != 32)
		{
			c++;
			sub = (char*)realloc(sub, c*sizeof(char));
			sub[w] = str[i];
			w++;
			i--;
		}
		else if (str[i] == 32 && w != 0)
		{
			str[w] = '\0';
			break;
		}
	}
	if (space == len)
	{
		sub = (char*)realloc(sub, 1 * sizeof(char));
		sub[0] = '\0';
		return sub;
	}
	else
	{
		int j = w - 1;
		char *sub1 = (char*)malloc(w * sizeof(char));
		for (i = 0; i < w; i++, j--)
		{
			sub1[i] = sub[j];
		}
		sub1[i] = '\0';
		return sub1;
	}
	return sub;
}
