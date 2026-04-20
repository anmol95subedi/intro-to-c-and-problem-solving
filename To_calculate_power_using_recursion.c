#include<stdio.h>
int exponent(int b,int e){
    if(e==0){
        return 1;
    }else{
        return b*exponent(b,e-1);
    }
}
void main()
{
    int b,e;
    printf("Enter a base = ");
    scanf("%d",&b);
    printf("Enter exponent = ");
    scanf("%d",&e);
    printf("%d^%d = %d",b,e,exponent(b,e));
}