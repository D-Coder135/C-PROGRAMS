#include<stdio.h>
void main()
{
  int i,j,n;
  printf("\nEnter size of the matrix:");
  scanf("%d",&n);
  int a[n][n],b[n][n],c[n][n];
  printf("\nEnter elements in the first matrix: \n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
  }
  printf("\nEnter elements in the second matrix: \n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    scanf("%d",&b[i][j]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    c[i][j]=0;
  }
   for(i=0;i<n;i+=n-1)
   {
     for(j=0;j<n;j+=n-1)
     c[i][j]=a[i][j]+b[i][j];
   }
printf("\nResultant matrix: \n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    printf("%d\t",c[i][j]);
printf("\n");
  }
}