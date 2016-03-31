/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int frequency = 0;
	int str_index = 0, word_index = 0;
	int word_length = 0;
	for (word_length = 0; word[word_length] != '\0'; word_length++);
	//printf("Word length is %d\n", word_length);
	while (str[str_index] != '\0')
	{
		if (str[str_index] == word[word_index])
		{
			word_index++;
		}
		if (word_index == word_length)	//Whole word has matched
		{
			frequency++;
			word_index = 0;
			str_index = str_index - word_length + 1;
		}
		str_index++;
	}
	return frequency;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

