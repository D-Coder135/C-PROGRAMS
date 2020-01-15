#include<stdio.h>
int main()
{
 int i,j,n,it,c=0;
printf("\nEnter the size of the array: ");
scanf("%d",&n);
int a[n];
printf("\nEnter elements in the array: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nEnter the value to search: ");
scanf("%d",&it);
for(i=0;i<n;i++)
{
  if(it==a[i])
 {
  c=c+1;
  printf("\nElement found at position=%d and at index number=%d",(i+1),i);
  break;
 }
}
if(c==0)
printf("\nElement Not found");
}