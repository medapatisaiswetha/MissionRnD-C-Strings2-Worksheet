/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word)
{
	int count=0,i=0,j=0;
	while (str[i] != '\0')
	{
		if (word[j] != '\0')
		{
			if (str[i] == word[j])
			{
				i++;
				j++;
			}
			else
			{
				i++;
				j = 0;
			}
		}
		else if (word[j] == '\0')
		{
			if (j!= 1)
			{
				count++;
				j = 0;
				i--;
			}
			else
			{
				count++;
				j = 0;
			}
		}
	}
	if (str[i] == '\0'&& word[j] == '\0')
		return (count + 1);
	else
		return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

