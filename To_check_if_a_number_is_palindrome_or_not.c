#include<stdio.h>
void main()
{
    int n,n1,s=0,r=0;
    printf("Enter a number = ");
    scanf("%d",&n);
    n1=n;
    while(n!=0){
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    if(n1==s){
        printf("%d is a palindrome number",n1);
    }else{
        printf("%d is not a palindrome number",n1);
    }
}