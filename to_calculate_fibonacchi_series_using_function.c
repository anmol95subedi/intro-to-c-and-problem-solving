#include<stdio.h>
int fib(int n){
    if(n==1){
        return 0;
    }else if(n==2){
        return 1;
    }else{
        return fib(n-1)+fib(n-2);
    }
}
void main()
{
    int n;
    printf("Enter nth number = ");
    scanf("%d",&n);
    printf("The %dth fibonacchi term is %d",n,fib(n));
}