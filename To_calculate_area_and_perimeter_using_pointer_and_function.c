#include<stdio.h>
int area(int *a,int *b,int *l,int *p){
    
    *a=*l**b;
    *p=2*(*l+*b);
}
void main()
{
    int l,b,a,p;
    int *l1,*b1,*a1,*p1;
    printf("Enter length and breadth of room = ");
    scanf("%d %d",&l,&b);
    l1=&l;
    b1=&b;
    a1=&a;
    p1=&p;
    area(a1,b1,l1,p1);
    printf("The area of rectangle is %d and perimeter is %d",*a1,*p1);
}