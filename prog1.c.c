#include<stdio.h>
int modify(int a[10]);
void main()
{
  int a[10],s;
  printf("\nEnter 10 elements in the array: ");
  for(int i=0;i<10;i++)
  scanf("%d",&a[i]);
  printf("\nThe new array after modification:\n");
  s=modify(a);
  printf("%d\n",s);
}
int modify(int a[10])
{
  int i;
  int b[10];
  for(i=0;i<10;i++)
  b[i]=a[i]*3;
for(i=0;i<10;i++)
printf("%d\n",b[i]);
int *ptr=b;
return(*ptr);
}
  