#include<stdio.h>
#include<math.h>
int input_number()
{
  int num;
  printf("enter a number\n");
  scanf("%d",&num);
  return num;
}

int is_prime(int n)
{
  int i;
  for(i=2;i<=n;i++)
  {
    if((n%i)==0)
     return 0;
    else
      return 1;
  }

}

void output(int n,int is_prime)
{
  if (is_prime==1)
    printf("%d is a prime number\n",n);
  else
    printf("%d is not a prime number\n",n);
}
int main()
{
int n,c;
n=input_number();
c=is_prime(n);
output(n,c);
return 0;
}