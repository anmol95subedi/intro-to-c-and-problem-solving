#include<stdio.h>
#define pi 3.1415
void main()
{
    float a,r;
    printf("Enter the radius of circle = ");
    scanf("%f",&r);
    a=pi*r*r;
    printf("The area of the given circle = %f",a);
}