#include<stdio.h>
int input_number()
{
  int num;
  printf("enter a number\n");
  scanf("%d\n",&num);
  return num;
}

int is_prime(int n)
{
  int sum==0;
  if(int i=1;i<sqrtn;i++)
  {
    ((n%i)==0);
    sum++;
  }
  return sum;
}

void output(int n,int is_prime)
{
  if (is_prime==0)
    printf("%d is a prime number\n",a);
  else
    printf("%d is not a prime number\n",a);
}
int main()
{
int n,cmp;
n=input_number();
cmp=is_prime(n);
output(n,cmp);
return 0;
}