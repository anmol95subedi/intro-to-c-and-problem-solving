#include<stdio.h>
#include<string.h>
void main(){
    char a[100];
    int i=0;
    printf("Enter a string = ");
    scanf("%s",a);
    while(a[i]!='\0'){
        i=i+1;
    }printf("The length of string is %d ",i);
}