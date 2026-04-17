#include<stdio.h>
void main()
{
    int n,c=0,i=1,j=0,a=0;
    printf("Enter the number of prime numbers to print = ");
    scanf("%d",&n);
    printf("Printing %d no of primes below : \n");
    while(c!=n){
        j++;
        for(i=2;i<j;i++){
            if(j%i==0)
                a=a+1;
        }
    
    if(a==0){
        printf("%d \n",j);
        c++;
    }
    a=0;
    }
}