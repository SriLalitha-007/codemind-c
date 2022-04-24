#include<stdio.h>
int main(){
    int n,sq,sum=0,rem=0;
    scanf("%d",&n);
        sq=n*n;
 while(sq!=0){
        rem = sq%10;
        sum += rem; //sum = sum + rem
        sq /= 10;
 }
if(sum==n){
    printf("Neon Number");
}
    else{
        printf("Not Neon Number");
    }
    
    return 0;
}