#include<stdio.h>
int input()
{
  int a;
  printf("enter a numbers\n");
  scanf("%d",&a);
  return a;
}
int multiply(int a,int b)
{
  int mula;
  mula=a*b;
  return mula;
}
void output(int a,int b,int multiply)
{
  printf("muliplication of two numbers %d %d is %d",a,b,multiply);
}
int main()
{
  int a,b,mul;
  a=input();
  b=input();
  mul=multiply(a,b);
  output(a,b,mul);
  return 0;
}

