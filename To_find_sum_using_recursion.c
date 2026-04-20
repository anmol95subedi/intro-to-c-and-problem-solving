#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }else{
        return n+sum(n-1);
    }
}
void main(){
    int n;
    printf("Enter the nth term to find sum upto = ");
    scanf("%d",&n);
    printf("The sum of natural number upto %d term is %d",n,sum(n));
}