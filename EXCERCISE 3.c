//Program that recieves "num" from the user.The program should print the "num"even numbers(starting from 2)
#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter num:");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    printf("%d",i*2);

     return 0;
}