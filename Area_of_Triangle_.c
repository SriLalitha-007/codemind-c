#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,result,p;
    
    scanf("%f%f%f",&a,&b,&c);
    p=((a+b+c)/2);
result=sqrt(p*(p-a)*(p-b)*(p-c)) ;

printf("%.2f",result);
    return 0;
}