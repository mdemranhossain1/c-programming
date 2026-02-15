#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Your Marks : ");
    scanf("%f",&marks);

    if(marks >=80)
        printf("A+");

     else if(marks>=70)
        printf("A");

     else if(marks>=60)
        printf("A-");

     else if(marks>=50)
        printf("B+");

     else if(marks>=40)
        printf("B");

     else
        printf("Faill");

     return 0;
}
