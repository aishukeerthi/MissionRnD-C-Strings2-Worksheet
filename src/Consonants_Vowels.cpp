/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


void count_vowels_and_consonants(char *str, int *consonants, int *vowels){
	if (str == NULL)
	{
		*consonants = 0;
		*vowels = 0;
	}
	else{
		int len = 0, x, i, vow = 0, cons = 0, lol = 0;
		while (str[len] != '\0')
			len++;
		for (i = 0; i < len; i++)
		{
			x = str[i];
			if (x == 65 || x == 69 || x == 73 || x == 79 || x == 85 || x == 97 || x == 101 || x == 105 || x == 111 || x == 117)
			{
				vow++;
			}
			else if (x == 32 || x == 46 || x == 44 || x == 63 ||(x>= 48 && x<=57))
				lol++;
			else
				cons++;
		}
		*consonants = cons;
		*vowels = vow;
	}
}
