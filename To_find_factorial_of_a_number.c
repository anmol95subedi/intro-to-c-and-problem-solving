#include<stdio.h>
void main()
{
    int n,f=1,i=1;
    printf("Enter a number = ");
    scanf("%d",&n);
    if(n<0){
        printf("The factorial of %d doesnt exist ", n);
    }else{
        for(i=1;i<=n;i++){
            f=f*i;
        }
        printf("The factorial of %d is %d ", n,f);
    }
}