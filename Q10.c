#include<stdio.h>
int sum=0,rem;
int reverse(int);
int main()
{
  int n,x;
  printf("Enter a no.");
  scanf("%d",&n);
  x=reverse (n);
  printf("The reversed number is %d ",x);
  return 0;
}
int reverse (int a)
{

  if(a)
  {
      rem=a%10;
      sum=sum*10+rem;
      reverse(a/10);
  }
  else
    return sum;
  return sum;


}
