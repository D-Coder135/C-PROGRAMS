#include<stdio.h>
#include<string.h>
void main()
{
   int i,l=0,f=0;
   char a[50],c;
   printf("\nEnter the string: ");
   gets(a);
   printf("\nEnter a char to find its freq. in the given string: ");
   scanf("%c",&c);
   l=strlen(a);
   for(i=0;i<l;i++)
   {
      if(c==a[i])
      f++;
   }
   printf("\nThe frequency of the given char %c is=%d",c,f);
}