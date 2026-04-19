#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    int l,i;
    printf("Enter your input string = ");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++){
        b[i]=a[i];
    }
    if(strcmp(a,b)==0){
        printf("Copied succesfully !!! b= %s",b);
    }
}