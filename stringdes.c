#include<stdio.h>
#include<string.h>
void main()
{
 int i,j,l;
 char a[100];
 printf("\nEnter a word: ");
 gets(a);
 l=strlen(a);
 for(i=0;i<l;i++)
{
 for(j=0;j<=i;j++)
 printf("%c",a[j]);
 printf("\n");
}
}