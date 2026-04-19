#include<stdio.h>
void main()
{
    int n,a,r,s=0;
    printf("Enter a number = ");
    scanf("%d",&n);
    a=n;
    while(n!=0){
        r=n%10;
        n=n/10;
        s=s+r*r*r;
    }
if(a==s){
    printf("The number %d is a armstrong number ",a);
}else{
    printf("%d is not a armstrong number ",a);
}
}