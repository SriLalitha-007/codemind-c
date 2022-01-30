#include<stdio.h>
int main(){
    int num,result=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            result=result+i;
              }
 }
   if (result==2*num){
       printf("True");
   }    
        else {
            printf("False");
        }
        
    return 0;
}