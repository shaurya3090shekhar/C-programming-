//program that recieves num from the user.The program should print all the integers from 1 upto num and vice versa example if num=5 then it should print 12345 and 54321

#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter a number:");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        printf("%d \n",i);
    }
     printf("\n");
    for(i=num; i>=0; i--)
    {
        printf("%d \n",i);    
    }
    return 0;
}