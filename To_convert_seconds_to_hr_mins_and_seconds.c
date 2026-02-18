#include<stdio.h>
void main()
{
    int s,min,hr;
    printf("Enter time in second = ");
    scanf("%d",&s);
    min=s/60;
    s=s-min*60;
    hr=min/60;
    min=min-hr*60;
    printf("Time : %d hr : %d mins : %d s",hr,min,s);
}