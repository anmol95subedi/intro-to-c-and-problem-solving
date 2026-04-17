#include<stdio.h>
void main()
{
    int n , i=1,c=0;
    printf("Enter a number = ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            c=c+1;
        }
    }
    if(c!=0){
        printf("%d is a composite number",n);
    }else{
        printf("%d is a prime number",n);
    }
}