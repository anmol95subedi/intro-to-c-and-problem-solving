#include<stdio.h>
int gcd(int a , int b){
    if(b==0){
        return a;
    }else{
        return(b,a%b);
    }
}
void main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("The Gcd of %d and %d is %d",a,b,gcd(a,b));
    }else{
        printf("The Gcd of %d and %d is %d",b,a,gcd(b,a));
    }

}
