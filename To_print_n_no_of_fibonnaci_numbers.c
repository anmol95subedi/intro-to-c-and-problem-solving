#include<stdio.h>
void main()
{
    int n,a=0,b=1,t;
    printf("Enter the nth term upto which fibonacchi series is to be printed = ");
    scanf("%d\t",&n);
    if(n>=1){
        printf("%d",a);
        while(n!=1){
            printf("%d \t",b);
            t=b;
            b=a+b;
            a=t;
            n=n-1;
        }
    }
}