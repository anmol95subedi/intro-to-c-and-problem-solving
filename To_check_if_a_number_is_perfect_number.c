#include<stdio.h>
void main()
{
    int n,i=1,a=1;
    printf("Enter a number = ");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            a=a+i;
        }
    }
    if(n==a){
        printf("%d is a perfect number ", n);
    }else{
        printf("%d is not a perfect number",n);
    }
}