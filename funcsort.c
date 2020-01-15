#include<stdio.h>
void sort(int a[],int);
void main()
{
  int i,n;
  printf("\nEnter the size of the array: ");
  scanf("%d",&n);
  int a[n];
  printf("\nEnter the elements in the array: ");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  sort(a,n);
}
void sort(int a[],int n)
{

 int i,j,t=0;
printf("\nSorted aaray= \n");
 for(i=0;i<n-1;i++)
{
  for(j=0;j<n-i-1;j++)
  {
     if(a[j]>a[j+1])
     {
       t=a[j];
       a[j]=a[j+1];
       a[j+1]=t;
     }
   }
}
for(i=0;i<n;i++)
printf("%d\n",	a[i]);
}
