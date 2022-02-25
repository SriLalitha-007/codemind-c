#include<stdio.h>
int main(){
    int a=0,b=1,c,i,n;
    scanf("%d",&n);
    if(n==a||n==b){
        printf("True");
    }
    c=a+b;
    while (c<n){
        c=a+b;
        a=b;
        b=c;
    }
    if(c==n){
        printf("True");
    }
    else
    printf("False");
    
    return 0;
}