#include<stdio.h>
int main()
{
    int n,dc=0,s=0,m=0,c=0,d,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        while(n)
        {
            d=n%10;
            n=n/10;
            dc++;
            m=0;
            for(i=1;i<=d;i++)
            {
                if(d%i==0)
                {
                    m++;
                }
            }
            if(m==2)
            {
                s++;
            }
        }
        if(dc==s)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
}