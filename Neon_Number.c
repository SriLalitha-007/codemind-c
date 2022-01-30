#include<stdio.h>
int main(){
    int num,res,rem=1,sum=0;
    scanf("%d",&num);
    res=num*num;
    while(res!=0){
         rem=res%10;
         sum+=rem;
         res/=10;
    }
    if(sum==num){
        printf("Neon Number");
    }
    else {
        printf("Not Neon Number");
    }
   return 0;
}