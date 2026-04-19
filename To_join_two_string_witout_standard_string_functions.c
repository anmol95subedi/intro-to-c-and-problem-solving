#include<stdio.h>
void main()
{
    char a[100],b[100],c[100];
    int l,i=1,j=1;
    printf("Enter first string = ");
    scanf("%s",a);
    printf("Enter second string = ");
    scanf("%s",b);
    l=strlen(a);
    for(i=0;i<l;i++){
        c[i]=a[i];
    }
    l=strlen(b);
    for(j=i;j<i+l;j++){
        c[j]=b[j-i];
    }
    printf("The concated string is = %s",c);
}