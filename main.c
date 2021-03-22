#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,sum,mul,sub,div;

    printf("\t Enter the value of ",num1);
    scanf("\t%d",&num1);
    printf("\t Enter the value of ",num2);
    scanf("\t%d",&num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("\n Sum of Two Numbers is = %d",sum);
    printf("\n Subtract of Two Numbers is = %d",sub);
    printf("\n Multiply of Two Numbers is = %d", mul);
    printf("\n Division of Two Numbers is = %d", div);

    getch();
}
    /* OUTPUT */
    /* 
       Enter the value of 45
       Enter the value of 5
       
       Sum of Two Numbers is = 50
       Subtract of Two Numbers is = 40
       Multiply of Two Numbers is = 225
       Division of Two Numbers is = 9
    */
