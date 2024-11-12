//Write an efficient program that recieves a "num" from the user.The program should calculate and print the SUM of all the numbers from '1 upto num'that can be divided by 3 and 5 
#include<stdio.h>
int main()
{
    int sum=0;
    int num;
    int i;
    printf("Enter num:");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        if(i%3==0 && i%5==0)
        {
            printf("%d can be divided by both 3 and 5.\n",i);
            sum=sum+i;
        }
    }
    printf("sum=%d \n",sum);
    return 0;
}