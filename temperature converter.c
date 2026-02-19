#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedTemp;

    printf("Temperature conversion menu\n");
    printf("1. Farenhit to celcius\n");
    printf("2. celcius to farenhite\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
    {
        printf("Enter the Farenhit tempature : ");
        scanf("%f",&temp);
        convertedTemp = (temp-32)/1.8;
        printf("the tempature in celcius is : %f\n ",convertedTemp);
        break;
    }
    case 2:
    {
        printf("Enter the celcius tempature : ");
        scanf("%f",&temp);
        convertedTemp = (1.8*temp)+32;
        printf("the tempature in farenhit is : %f\n ",convertedTemp);
            default:
            printf("Not a correct option");
        }
    }


}
