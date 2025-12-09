/*Finding Nearest vowel (for only lower case)
 * Write a progam to find the nearest vowel for a given character?
 *
 */

#include<stdio.h>

int main()
{
	char ch;
	printf("input = ");
	scanf("%c", &ch);

	(ch >= 'a' && ch <= 'z')?(ch >= 'a' && ch <= 'b')?
		printf("Nearest vowel is a"):(ch == 'c')?
		printf("Nearest vowel are a,e"):(ch == 'd')?
		printf("Output = Nearest vowel is e"):(ch == 'e')?
		printf("Output = Nearest vowel is a,i"):(ch == 'f')?
		printf("Output = Nearest vowel is e"):(ch == 'g')?
		printf("Output = Nearest vowel is e,i"):(ch >= 'h' && ch <= 'k')?
		printf("Output = Nearest vowel is i"):(ch == 'l')?
		printf("Output = Nearest vowel is i,o"):(ch >= 'm' && ch <= 'q')?
		printf("Output = Nearest vowel is o"):(ch == 'r')?
		printf("Output = Nearest vowel is o,u"):printf("Output = Nearest vowel is u"):printf("Output = Wrong input");
}

