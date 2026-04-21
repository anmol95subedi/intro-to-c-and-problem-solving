#include<stdio.h>
void main(){
    int *p,*q,a,b;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b);
    p=&a;
    q=&b;
    printf("Sum of %d and %d is %d \n",*p,*q,*p+*q);
    printf("Product of %d and %d is %d \n",*p,*q,*p**q);
    printf("Difference of %d and %d is %d \n",*p,*q,*p-*q);
}