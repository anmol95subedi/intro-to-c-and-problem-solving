#include<stdio.h>
void main()
{
    int n,c=0,i=1,j=0,a=0,z;
    printf("Enter the value of nth perfect number to print = ");
    scanf("%d",&n);
  while(c!=n){
        j++;
        for(i=1;i<j;i++){
            if(j%i==0){
                a=a+i;
            }
        }
        if(a==j){
            z=j;
            c++;
        }
    a=0;
    }
    printf("The %dth perfect number is %d",n,z);
}

    