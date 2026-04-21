#include<stdio.h>
int happy(int n){
    int r,s=0;
    if(n==1){
        return 1;
    }
    while(n!=0){
        r=n%10;
        s=s+r;
        n=n/10;
    }
    return happy(s);    
}
void main()
{
    int n;
    printf("Enter a number = \n");
    scanf("%d",&n);
    if(happy(n)==1){
        printf("The given number %d is a happy number ",n);
    }else{
        printf("The given number %d is not a happy number ",n);
    }
}