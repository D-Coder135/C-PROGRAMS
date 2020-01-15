#include<stdio.h>
#include<string.h>
void main()
{
    char s[100],i,j;
    int c;
    fgets(s,sizeof(s),stdin);
    for(i='A';i<='Z';i++)
    {
        c=0;
        for(j=0;j<strlen(s);j++)
        {
            if(i==s[j])
            ++c;
        }
        if(c!=0)
        printf("%c Frequency is %d\n",i,c);
    
    }
}