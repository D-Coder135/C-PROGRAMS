#include<stdio.h>
void main()
{
  int c,r,i,j;
printf("\nEnter Number of rows and columns: ");
scanf("%d",&r);
scanf("%d",&c);
int a[r][c],b[r][c],s[r][c];
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
}
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  scanf("%d",&b[i][j]);
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
s[i][j]=a[i][j]+b[i][j];
}
}
printf("\nSum of Matrix=\n ");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",s[i][j]);
}
printf("\n");
}
}