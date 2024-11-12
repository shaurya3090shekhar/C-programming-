//program that recieves an integer and print its multiplicator code

#include<stdio.h>
int main()
{
    int i;
    int num,multiplicator;
    printf("Enter the num:");
    scanf("%d", &num);
     printf("Enter the multiplicator:");
    scanf("%d", &multiplicator);

    for(i=1; i<=multiplicator; i++)
    {
        printf("%d*%d=%d \n",num,i,num*i);
    }
    return 0;

}