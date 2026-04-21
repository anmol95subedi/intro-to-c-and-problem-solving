#include<stdio.h>
void main()
{
    int a[5],i=0;
    printf("Enter 5 numbers in a array = \n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("The numbers displayed using array \n ");
    for(i=0;i<5;i++){
        printf("%d\n",*(a+i));
    }
}