#include<stdio.h>
int mul(int,int);
int main()
{
int res;
int(*ptr)(int,int);
ptr=&mul;
res=ptr(10,20);
printf("\nMultiplication =%d",res);
}
int mul(int x,int y)
{
 int z=x*y;
return z;
} 