#include<stdio.h>

int main()
{
int a,b;
printf("enter two numbers \n  ");
scanf("%d %d",&a,&b);

 int x[a][b];
 int i,j ;

 printf("enter %d numbers",a*b);

for(i=0;i<a;i++)
{
  for(j=0;j<b;j++)
  {
  scanf("%d",&x[i][j]);
  }
}
 //get the small
 int small=x[0][0];

 for(i=0;i<a;i++)
{
  for(j=0;j<b;j++)
  {
  if (small<x[i][j])
  small=x[i][j];
  }
}
 printf(" the smellest number is %d",small);

     return 0
 }
