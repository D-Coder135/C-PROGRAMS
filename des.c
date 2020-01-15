#include<stdio.h>
void main()
{
 char s[10];
printf("\nEnter the word: ");
gets(s);
for(int i=0;s[i]!='\0';i++)
{
  for(int j=0;j<=i;j++)
  printf("%c",s[j]);
printf("\n");
}
}