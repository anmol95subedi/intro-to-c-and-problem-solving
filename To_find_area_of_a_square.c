#include<stdio.h>
void main(){
    float a,l;
    printf("Enter the length of the square =");
    scanf("%f",&l);
    a=l*l;
    printf("The area of the square with length %.4f is %.4f",l,a);
}