#include<stdio.h>
void main()
{
    int n,c=0,i=1,j=0,a=0,z;
    printf("Enter the value of nth prime number to print = ");
    scanf("%d",&n);
    while(c!=n){
        j++;
        for(i=2;i<j;i++){
            if(j%i==0)
                a=a+1;
        }
    
    if(a==0){
        z=j;
        c++;
    }
    a=0;
    }
    printf("The %dth prime number is %d",n,z);
}