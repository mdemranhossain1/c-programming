//write
#include<stdio.h>
int main()

{
    int num1,num2,sum;
    float avg;
    printf("Enter two integer Number : ");

    scanf("%d %d",&num1,&num2);
    sum = num1 + num2;
    printf("Print the sum : %d\n",sum);
    avg = (float)sum/2;//type casting
    printf("The avarage Number :%2.f\n",avg);



    return 0;
}
