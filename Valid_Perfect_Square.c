#include<stdio.h>
#include<math.h>
int main(){
   int t,n,res;
   scanf("%d",&t);
   for(int i=0;i<t;i++){
       scanf("%d",&n);
   res=(int)pow (n,(0.5));
   if(res*res==n){
       printf("True
");
   }
   else{
       printf("False
");
       
   }
   }
    
    
    
return 0;
}
    
    
