//write a program using for loops that recieves as input two values "number" and "power".The program should print the result of "num^pow" and print the result on the screen.

#include<stdio.h>
int main()
{
    int num;
    int pow;
    int result=1;
    int i;

    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &pow);

    for(i=1; i<=pow; i++)
    {
        result= result * num;
    }
    printf("%d in the power of %d=%d",num,pow,result);
    return 0;
}