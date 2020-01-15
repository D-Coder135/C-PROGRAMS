#include<stdio.h>
void main()
{
 int n,i,pos;
printf("\nEnter the size of array: ");
scanf("%d",&n);
int a[n];
printf("\nEnter elements in the array: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nEnter the position: ");
scanf("%d",&pos);
for(i=pos-1;i<=n-1;i++)
a[i]=a[i+1];
n=n-1;
printf("\nArray after deletion: ");
for(i=0;i<n;i++)
printf("%d",a[i]);
}