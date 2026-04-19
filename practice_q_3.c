#include<stdio.h>
void main(){
    int i=1,j=4,k=1;
    for(i=1;i<=5;i++){
        for(j=5-i;j>=1;j--){
            printf(" ");
        }for(k=2*(i-1)+1;k>=1;k--){
        printf("*");
    }printf("\n");
    }
}