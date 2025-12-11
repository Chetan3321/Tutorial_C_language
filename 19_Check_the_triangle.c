/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the sides:");
    scanf("%d %d %d",&a, &b, &c);
    
    if((a<=0)||(b<=0)||(c<=0))
    {
        printf("Wrong inputs");
    }
    else if((a==b)&&(b==c)&&(a==c))
    {
        printf("Equilateral triangle");
    }
    else if((a==b)||(b==c)||(a==c))
    {
        printf("Isosceles traingle");
    }
    else
    {
        printf("Scalene traingle");
    }

    return 0;
}