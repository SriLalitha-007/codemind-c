#include<stdio.h>
int main(){
    int n,res=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            if(i%2!=0){
               res=0;
               break;
            }
        }
    }
    if (res==0){
        printf("False");
    }
    else {
        printf("True");
    }
    return 0;
}