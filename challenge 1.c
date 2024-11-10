//write a program using FOR LOOPS in which it recieves input from user as "num" and print all tha possible numbers from 1 to "num"#include<stdio.h>

#include<stdio.h>
int main()
{
    int num;
    int i;
    printf("enter the number:");
    scanf("%d", &num);
 for (i = 1; i <= num; i++)
    {
        printf("%d",i);
    }
    return 0;
}