#include<stdio.h>
void main()
{
    int a[10],i=0,avg=0;
    printf("Enter marks of 10 students : \n");
    for(i=0;i<10;i++){
        printf("Enter %d th students marks : ",i+1);
        scanf("%d",a+i);
    }
    for(i=0;i<10;i++){
        avg=avg+*(a+i);
    }
    avg/=10;
    printf("The avg marks is %d",avg);
}