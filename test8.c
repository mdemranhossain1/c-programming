#include<stdio.h>
int main()
{
     char ch;
    printf("Enter a letter : ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='i' || ch=='e' || ch=='o' || ch=='u')
        printf("vowel");

    else
        printf("consonant");

    return 0;



}
