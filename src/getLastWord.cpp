/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<stdio.h>

char * get_last_word(char * str){
	if (str == NULL)
		return NULL;
	int len = 0, i, x = 0, j = 0;
	while (str[len] != '\0')
		len++;
	for (i = len - 1; str[i] == ' '; i--);
	int word_length = 0;
	for (; str[i] != ' ' && i >= 0; i--)
		word_length++;

	i = i + 1;

	int k = 0;
	char *result = (char*)malloc(sizeof(char)*(word_length + 1));

	for (k = 0; k<word_length; k++)
		result[k] = str[k + i];

	result[word_length] = '\0';
	return result;
}
