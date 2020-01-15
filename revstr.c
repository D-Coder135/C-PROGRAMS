#include<stdio.h>
#include<string.h>
void main()
{
  int i,j,l1=0;
  char b[100],c[100];
  printf("\nEnter String: ");
  gets(b);
  for(i=0;b[i]!='\0';i++)
  l1++;
  for(i=0;i<100;i++)
  {
    for(j=l1-1;j>=0;j--)
    c[i++]=b[j];
    break;
  }
  puts(c);
}r