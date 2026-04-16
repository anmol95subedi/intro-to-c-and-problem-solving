#include<stdio.h>
void main(){
    int age;
    printf("Enter your age = ");
    scanf("%d",&age);
    if(age<=0){
        printf("Age cant be %d , Invalid format",age);
    }else if(age>=18){
        printf("The Person is eligible to vote ");
    }else{
        printf("The Person isnt eligible to vote ");
    }
}