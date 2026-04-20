#include<stdio.h>
int factorial(int a){
    int f=1,i=1;
    for(i=1;i<=a;i++){
        f=f*i;
    }
    return f;
}

void main()
{
    int a;
    printf("Enter a number = ");
    scanf("%d",&a);
    printf("The factorial of %d is %d ",a,factorial(a));
}