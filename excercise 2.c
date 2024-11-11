//write a program that recieves an integer n.The program shpuld print a right angled triangle 
#include<stdio.h>
int main()
{
    int i,j;
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        printf("%d",i);
        printf("\n");
    }
    return 0;
}