#include<stdio.h>
void main()

{
    int a,b,c;
    printf("Enter value of a = ");
    scanf("%d",&a);
    printf("Enter value of b = ");
    scanf("%d",&b);
    c=b;
    b=a;
    a=c;
    printf("The new value of a = %d \n ",a);
    printf("The new value of b = %d",b);

}