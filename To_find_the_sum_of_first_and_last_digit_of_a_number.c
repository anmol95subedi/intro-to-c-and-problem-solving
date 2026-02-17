#include<stdio.h>
void main(){
    int n,last,n1,first,sum;
    printf("Enter a number = ");
    scanf("%d",&n);
    last=n%10;
    n1=n;
    while(n!=0){
        first=n%10;
        n=n/10;
    }
    sum=last+first;
    printf("The sum of first and last digit of %d is %d ",n1,sum);
}