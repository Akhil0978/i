#include<stdio.h>
void binary(int);
int main()
{
    int x;
    printf("Enter value of n : ");
    scanf("%d",&x);
    binary(x);
    return 0;
}
void binary(int a)
{
    if(a>0)
    {
        binary(a/2);
        printf("%d",a%2);
    }
}


