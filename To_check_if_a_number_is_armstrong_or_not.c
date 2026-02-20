#include<stdio.h>
void main()
{
    int n,n1,r=0,s=0;
    printf("Enter a number = ");
    scanf("%d",&n);
    n1=n;
    while(n!=0){
        r=n%10;
        n=n/10;
        s=s+r*r*r;
    }
    if(s==n1){
        printf("%d is a armstrong number",n1);
    }else{
        printf("%d is not a armstrong number ",n1);
    }
}