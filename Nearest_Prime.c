#include<stdio.h>
int main()
{
    int n,i,arr[100],c=0,h,t,bp,np,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=arr[i];j>=1;j--)
        {
            c=0;
            for(k=1;k<=j;k++)
            {
            if(j%k==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            np=j;
            h=arr[i]-np;
            break;
        }
    }
    for(j=arr[i];j<=arr[i]+100;j++)
    {
        c=0;
        for(k=1;k<=j;k++)
        {
            if(j%k==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            bp=j;
            t=bp-arr[i];
            break;
        }
    }
    if(h<=t)
    {
        printf("%d
",np);
    }
    else
    {
        printf("%d
",bp);
    }
}
}