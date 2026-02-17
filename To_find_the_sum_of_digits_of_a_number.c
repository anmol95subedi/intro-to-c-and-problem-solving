#include<stdio.h>
void main(){
    int n,s=0,n1,r;
    printf("Enter a number = ");
    scanf("%d",&n);
    n1=n;
    while(n!=0){
        r=n%10;
        n=n/10;
        s=s+r;
    }printf("The sum of digit of %d is %d",n1,s);
}