#include<stdio.h>
#include<math.h>
void main()
{
    int mean=0,i,m1=0,sd=0;
    int a[]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
    for(i=0;i<sizeof(a);i++)
    {
        mean+=a[i];
    }
    mean=mean/sizeof(a);
    for(i=0;i<sizeof(a);i++)
    {
        m1+=(a[i]-mean)*(a[i]-mean);
    }
    sd=(sqrt(m1))/(sqrt(sizeof(a)));
    printf("Mean=%d\n",mean);
    printf("Standard Deviation=%d\n",sd);
}