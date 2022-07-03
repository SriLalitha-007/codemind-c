#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        c=0;
        for(j=1;j<n-1;j++)
        {
            if(arr[j+1]%2&&arr[j-1]%2==0||arr[j+1]%2==0&&arr[j-1]%2)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}