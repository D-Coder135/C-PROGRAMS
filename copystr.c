#include<stdio.h>
#include<string.h>
void main()
{
   int i;
   char b[100],c[100];
   printf("\nEnter the String: ");
   gets(b);
   for(i=0;b[i]!='\0';i++)
   c[i]=b[i];
   printf("\nAfter copying String c becomes: ");
   puts(c);
}