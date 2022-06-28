#include<stdio.h>
int main()
{
    int n,sq,rev=0,qs,d,s,v=0;
    scanf("%d",&n);
    sq=n*n;
    while(n!=0){
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    qs=rev*rev;
    while(qs!=0){
        s=qs%10;
        qs=qs/10;
        v=v*10+s;
    }
    if(sq==v){
        printf("True");
    }
    else
    printf("False");

}