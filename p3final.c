#include<stdio.h>
#include<math.h>
int input_number()
{
  int num;
  printf("enter a number\n");
  scanf("%d\n",&num);
  return num;
}

int is_prime(int n)
{
  int sum=0;
  if(int i=2;i<sqrtn;i++)
  {
    if((n%i)==0);
    sum++;
  }
  return sum;
}

void output(int n,int is_prime)
{
  if (is_prime==0)
    printf("%d is a prime number\n",n);
  else
    printf("%d is not a prime number\n",n);
}
int main()
{
int n,cmp;
n=input_number();
cmp=is_prime(n);
output(n,cmp);
return 0;
}