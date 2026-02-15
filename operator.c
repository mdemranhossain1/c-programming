//write a programme two value multiplication
#include<stdio.h>
int main()

{
    int num1,num2,result;

    printf("Enter two integer Number : ");

    scanf("%d %d",&num1,&num2);
    result = num1 + num2;
    printf("Print the sum result : %d\n",result);

    result = num1 / num2;
    printf("Print the div result : %d\n",result);

    result = num1 * num2;
    printf("Print the mul result : %d\n",result);

    result = num1 - num2;
    printf("Print the sub result : %d\n",result);

    result = num1 % num2;
    printf("Print the modulus result : %d\n",result);

    return 0;
}
