#include<stdio.h>
int main()
{
    int num1,num2;
    char oper;

    printf("Enter two number : ");
    scanf("%1f %1f",&num1,&num2);

    printf("Enter an operator (+,-,*,/) : ");
    scanf("%c",&oper);

    switch(oper)
    {
    case '+':
    {
        printf("%1f+%1f = %1f\n",num1,num2,num1+num2);
        break;

    }

    case '-':
    {
        printf("%1f-%1f = %1f\n",num1,num2,num1-num2);
        break;

    }
    case '*':
    {
        printf("%1f*%1f = %1f\n",num1,num2,num1*num2);
        break;

    }
    case '/':
    {
        printf("%1f/%1f = %1f\n",num1,num2,num1/num2);
        break;

    }
defult:
    printf("Not a valid operator\n");
    }
}
