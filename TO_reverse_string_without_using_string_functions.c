#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    int l,i;
    printf("Enter a string = ");
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;i<l;i++){
        b[i]=a[l-(i+1)];
    }
    printf("The reversed string is %s ",b);
}