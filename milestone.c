//write a program that can calculate Total amount  of money if money doubles each day for 30 days 
#include<stdio.h>
int main()
{
    int i;
    int totalamount=1;
    for(i=1; i<=30; i++)
    {
        printf("Day %d: Amount %d \n",i,totalamount);
        totalamount=totalamount*2;
    }
    printf("Total amount after 30 days:\n",totalamount);
    return 0;
}