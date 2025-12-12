/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float bs, hra, da, gs;
    printf("Enter the salary:");
    scanf("%f",&bs);
    
    if(bs <= 0)
    {
        printf("wrong input");
    }
    else if(bs <= 10000)
    {
        hra = bs*0.2;
        da = bs*0.8;
        gs = bs+hra+da;
        printf("%0.2f\n", gs);
        
    }
    else if((bs>10000)&&(bs<=20000))
    {
        hra = bs*0.25;
        da = bs*0.9;
        gs = bs+hra+da;
        printf("%0.2f\n", gs);
    }
    else
    {
        hra = bs*0.30;
        da = bs*0.95;
        gs = bs+hra+da;
        printf("%0.2f\n", gs);
    }

    return 0;
}