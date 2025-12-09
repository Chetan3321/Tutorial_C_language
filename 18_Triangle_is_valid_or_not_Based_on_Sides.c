/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Traingle is valid or not_nased on sides input(using if else)
#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter the three sides:");
    scanf("%d %d %d", &side1, &side2, &side3);
    
    if((side1 <= 0)||(side2 <= 0)||(side3 <= 0))
    {
        printf("Wrong input");
    }
    else if((side1 + side2 > side3)&&(side1 + side3 > side2)&&(side2 + side3 > side1))
    {
        printf("valid triangle");
    }
    else
    {
        printf("invalid triangle");
    }

    return 0;
}
