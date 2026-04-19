#include<stdio.h>
void main(){
    int i=0,j,k;
    for(i=1;i<=4;i++){
        for(j=1;j<=(4-i);j++){
            printf("\t");
        }for(k=1;k<=i;k++){
            printf("%d\t",k*i);
        }
        printf("\n");
    }
}