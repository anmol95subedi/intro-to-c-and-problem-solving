#include<stdio.h>
int series(int n){
    int i=1,s=1;
    if(n==1){
        return 1;
    }else{
        for(i=1;i<n;i++){
            s=s*10+1;
        }
        return s+ series(n-1);
    }
}
void main()
{
    int n;
    printf("Enter the nth term value = ");
    scanf("%d",&n);
    printf("The sum of 1 + 11+ 111 upto %dth term is %d",n,series(n));
}