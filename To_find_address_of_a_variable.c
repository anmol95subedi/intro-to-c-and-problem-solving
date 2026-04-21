#include<stdio.h>
void main()
{
  int *p;
  int a=5;
  p=&a;
  printf("the address of %d is %p",a,p);
}