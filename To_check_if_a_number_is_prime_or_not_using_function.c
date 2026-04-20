#include<stdio.h>
int prime(int n){
    int i=2;
    for(i=2;i<n;i++){
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}
void main(){
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    if(prime(n)==0){
        printf("The number is a prime number");
    }else{
        printf("The number is a composite number");
    }
}