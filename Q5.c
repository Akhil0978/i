#include<stdio.h>
void even(int);
int main()
{
    int x;
    printf("Enter value of n : ");
    scanf("%d",&x);
    even(x);
    return 0;
}
void even(int a)
{
    if(a==0)
        return;
    even(a-1);
     printf("\n %d",2*a);
}

