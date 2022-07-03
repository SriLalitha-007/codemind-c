#include<stdio.h>
int main()
{
    int n,i,arr[100],max,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
        for(i=0;i<n;i++)
        {
            if(arr[i]+k>=max)
            {
                printf("True ");
            }
            else
            {
                printf("False ");
            }
        }

   }