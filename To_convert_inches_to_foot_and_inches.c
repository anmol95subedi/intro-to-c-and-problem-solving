#include<stdio.h>
void main()
{
    int inc,ft;
    printf("Enter length in inches = ");
    scanf("%d",&inc);
    ft=inc/12;
    inc=inc-ft*12;
    printf("Given length is %d foot and %d inches",ft,inc);
}