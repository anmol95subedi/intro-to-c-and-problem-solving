#include<stdio.h>
void main(){
    int n,i,c=0;
    printf("Enter a number = ");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            c=1;
        }
    }
    if(c==1){
        printf("THe number is composite =%d ",n);
    }else{
        printf("The number is prime = %d ",n);
    }
}