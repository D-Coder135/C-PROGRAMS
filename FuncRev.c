#include<stdio.h>
void rev(int);
void main()
{
   int n;
   printf("\nEnter the number to reverse:");
   scanf("%d",&n);
   rev(n);
}
void rev(int p)
{
   int r=0,rev=0;
   while(p!=0)
   {
     r=p%10;
     rev=(rev*10)+r;
     p=p/10;
   }
   printf("\nReverse of the number:%d\n",rev);
}
   