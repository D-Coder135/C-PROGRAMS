#include<stdio.h>
void main()
{
   int i,j,n;
   printf("\nEnter the order of the matrix:");
   scanf("%d",&n);
   int a[n][n];
   printf("\nEnter the elements in the matrix: \n");
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=n;j++)
      scanf("%d",&a[i][j]);
   }
  for(i=1;i<=n;i++)
  {
    if((i%2)==0)
    {
      for(j=n;j>=1;j--)
      printf("%d\t",a[i][j]);
    }
    else
    {
      for(j=1;j<=n;j++)
      printf("%d\t",a[i][j]);
    }
  }
}