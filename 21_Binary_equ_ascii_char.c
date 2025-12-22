/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//Binary equivalent of ascii char.

int main()
{
    char ch;
    int bit = 7;
    
    printf("Enter the char:");
    scanf("%c", &ch);
    
    while(bit >= 0)
    {
        printf("%d", (ch >> bit)& 1);
        bit --;
    }
    printf("\n");
    
    

    return 0;
}