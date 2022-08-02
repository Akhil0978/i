#include<stdio.h>
void odd(int);
int main()
{
    int x;
    printf("Enter value of n : ");
    scanf("%d",&x);
    odd(x);
    return 0;
}
void odd(int a)
{
    if(a==0)
        return;
         printf("\n %d",2*a-1);
    odd(a-1);
}


