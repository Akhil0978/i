#include<stdio.h>
void sqr(int);
int main()
{
    int x;
    printf("Enter value of n : ");
    scanf("%d",&x);
    sqr(x);
    return 0;
}
void sqr(int a)
{
    if(a==0)
        return;
    sqr(a-1);
     printf("\n %d",a*a);
}


