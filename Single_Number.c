#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n],s=0,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            s=1;
            printf("%d",arr[i]);
        }
    }
    if(c==0)
    {
        printf("No Single Number");
    }
}