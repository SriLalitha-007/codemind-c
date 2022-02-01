#include<stdio.h>
#include<math.h>
int main(){
    int num,sum=0;
    scanf("%d",&num);
    for(int i=1;i<sqrt(num);i++){
  if(num%i==0){
      if(num/i == i)
      sum = sum +i;
      {
          sum = sum + i;
          sum = sum + (num/i);
      }
  
        }
    }
    sum =sum-num;
    if (sum>num){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}