#include<stdio.h>
void main()
{
    int a[10],i=0;
    printf("Enter 10 numbers in an array : \n \n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("Displaying 10 numbers \n");
    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
}