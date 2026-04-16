#include<stdio.h>
void main(){
    float c,f;
    printf("Enter temperature in Degree cencius = ");
    scanf("%f",&c);
    f=(9.0/5)*c+32;
    printf("%f degree celcius = %f degree farhenheit",c,f);
}