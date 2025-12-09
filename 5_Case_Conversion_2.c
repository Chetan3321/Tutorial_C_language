/* Case Conversion (use control statements)
 *
 * Take char from input and if supplied char is in lower case than convert to upper and vice versa. If not alphabet then, print error msg like wrong input.
 * note: develop logic by using control statements
 *
 * input	output
 *  G		 g
 *  z		 Z
 *  #		wrong input
 *
 */

#include<stdio.h>

int main()
{
	char ch;
	printf("Enter the charecter = ");
	scanf("%c", &ch);

	if((ch >= 'a') && (ch <= 'b'))
	{
		ch -= 32;
		printf("%c", ch);
	}
	else if((ch >= 'A') && (ch <= 'Z'))
	{
		ch += 32;
		printf("%c", ch);
	}
	else
	{
		printf("Wrong input");
	}
}

