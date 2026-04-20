#include<stdio.h>
int greater(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
void main()
{
    int a,b;
    printf("Enter two number = ");
    scanf("%d %d",&a,&b);
    printf("%d is greater",greater(a,b));
}