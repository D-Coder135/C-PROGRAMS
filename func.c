#include<stdio.h>
void sub();
void main()
{
  sub();
}
void sub()
{
 int a,b,c;
 printf("\nEnter numbers to substract: ");
 scanf("%d %d",&a,&b);
 c=b-a;
 printf("\nDifference=%d",c);
}