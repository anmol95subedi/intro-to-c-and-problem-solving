#include<stdio.h>
void main()
{
    int n,i=2,c=0;
    printf("Enter a number = ");
    scanf("%d",&n);
    prime:
        if(i<n){
            if(n%i==0){
                printf("%d is a composite number",n);
            }else{
                i++;
                goto prime;
            }
        }
        else{
            printf("The number is a prime number");
        }
    ;
}