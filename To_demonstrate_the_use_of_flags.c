#include<stdio.h>
void main()
{
    int a=67;
    printf("%08d\n",a);
    printf("%#d\n",a);
    printf("% d\n",a);
    printf("%-d\n",a);
    printf("+$%0010d\n",a);
}