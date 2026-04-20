#include<stdio.h>
int sumeven(int n){
    int r,s=0;
    while(n!=0){
        r=n%10;
        if(r%2==0){
            s=s+r;
        }
        n=n/10;
    }
    return s;
}
void main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    printf("The sum of even numbers in the number %d is %d",n,sumeven(n));
}