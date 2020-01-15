#include<stdio.h>
#include<string.h>
void main()
{
  int i,j,l1=0,l2=0;
  char a[]={"Sachin Tendulkar"};
  char b[]={"Hello"};
  char c[100];
for(i=0;a[i]!='\0';i++)
l1++;
for(j=0;b[j]!='\0';j++)
{
  c[j]=b[j];
  l2++;
}
c[5]=' ';
for(i=6;i<(l1+l2+1);i++)
c[i]=a[i-6];
puts(c);
}