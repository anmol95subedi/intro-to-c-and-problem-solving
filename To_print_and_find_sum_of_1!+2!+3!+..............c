#include<stdio.h>
void main()
{
    int n,i=1,f=1,s=1,j=1;
    printf("Enter the value of nth term to print and find sum upto = ");
    scanf("%d",&n);
    printf("%d! ",i);
    for(i=2;i<=n;i++){
        printf("+ %d! ",i);
        for(j=1;j<=i;j++){
            f=f*j;
        }
        s=s+f;
        f=1;
    }printf("\nThe sum upto nth term is %d",s);
}