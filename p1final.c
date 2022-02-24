#include<stdio.h>
#include<math.h>

void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("enter a four points\n");
  scanf("%f %f %f %f\n",x1,y1,x2,y2);
}
void find_distance(float x1,float y1,float x2,float y2,float *distance)
{
  *distance=(pow((x2-x1),2)+pow((y2-y1),2));
}

void output(float x1,float y1,float x2,float y2,float distance)
{
  printf("%f is the distance between two points\n",distance);
}

int main()
{
  float x1,y1,x2,y2,d;
  input(&x1,&x2,&y1,&y2);
  find_distance(x1,x2,y1,y2,&d);
  output(x1,x2,y1,y2,d);
  return 0;
}
