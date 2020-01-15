#include<stdio.h>
void main()
{
 int a=5;
int *ptr;
int **ptr1;
ptr=&a;
ptr1=&ptr;
printf("%d\n",*ptr);
printf("%d\n",**ptr1);
}