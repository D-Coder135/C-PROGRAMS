#include<stdio.h>
void main()
{
  char s1[100];
  int i;
  int v=0,c=0,d=0,s=0;
  printf("\nEnter String: ");
  gets(s1);
  for(i=0;s1[i]!='\0';i++)
  {
    if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
    ++v;
    else if(s1[i]>='a'&&s1[i]<='z'||s1[i]>='A'&&s1[i]<='Z')
    ++c;
    else if(s1[i]>='0'&&s1[i]<='9')
    ++d;
    else
    ++s;
  }
  printf("\nVowels=%d",v);
  printf("\nConsonants=%d",c);
  printf("\nDigits=%d",d);
  printf("\nSpaces=%d",s);
}