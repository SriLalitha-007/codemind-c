#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int max = -99999;
    for(int i=0;i<=n;i++){
        scanf("%d",&a[i]);
        max = max>a[i] ? max : a[i];
    }
    for(int i=0;i<n;i++){
      for(int j = i+1; j < n; j++){
         
         if(a[i] == a[j]){
            for(int k = j; k <n; k++){
               a[k] = a[k+1];
            }
            j--;
            n--;
         }
      }
   }
    for(int i=0;i<n;i++){
      printf("%d ",a[i]);
   }
    
   return 0;
  
}