#include<stdio.h>
void printN(int);
int main()
{
    int x;
    printf("Enter value of n : ");
    scanf("%d",&x);
    printN(x);
    return 0;
}
void printN(int n)
{
    if(n>0)
    {
        printN(n-1);
        printf(" \n %d",n);
    }
}
