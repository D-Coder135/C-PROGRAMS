#include<stdio.h>
void main()
{
    int n,r,i;
    scanf("%d",&n);
    r=n/1000;
    for(i=1;i<=r;i++)
    {
        printf("%c",'m');
        n=n-1000;
        r=r/500;
        printf("%c",'d');
        n=n-500;
        r=n/100;
        for(i=1;i<=r;i++)
        {
            printf("%c",'c');
        }
        n=n-(r*100);
        r=n/10;
        for(i=1;i<=r;i++)
        printf("%c",'x');
    }
        n=n-(r*10);
        if(n>5)
        {
            printf("v\n");
            n=n-5;
        }
        if(n==1)
        printf("i\n");
        else if(n==2)
        printf("ii\n");
        else if(n==3)
        printf("iii\n");
        else if(n==4)
        printf("iv\n");
        else
        printf("v\n");
}