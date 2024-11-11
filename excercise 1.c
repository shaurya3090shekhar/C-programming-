//write a program that recieves an integer n.The program should print a right angle triangle 
#include<stdio.h>
int main()
{
    int i,j;
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        printf("%d",j);
        printf("\n");
    }
    return 0;

    }
