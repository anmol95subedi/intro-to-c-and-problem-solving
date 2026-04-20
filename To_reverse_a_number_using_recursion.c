#include<stdio.h>
int rev(int n){
    int s=0,r;
    while(n!=0){
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    return s;
}
void main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    printf("The reverse of %d is %d",n,rev(n));
}