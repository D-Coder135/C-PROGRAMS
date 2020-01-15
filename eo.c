#include<stdio.h>
void main()
{
int i,n=4;
int a[n],b[5],c[5];
printf("\nEnter Elements: ");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
if((a[i]%2)==0)
b[i]=a[i];
else
b[i]=0;
if((a[i]%2)!=0)
c[i]=a[i];
else
c[i]=0;
}
printf("\nEven Array: ");
for(i=1;i<=5;i++)
{
printf("%d",b[i]);
}
printf("\nOdd Array: ");
for(i=1;i<=5;i++)
{
printf("%d",c[i]);
}
}