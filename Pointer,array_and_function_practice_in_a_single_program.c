#include<stdio.h>
int largest(int *p,int a){
    int t,i=0;
    t=*p;
    for(i=0;i<5;i++){
        if(*(p+i)>t){
            t=*(p+i);
        }
    }
    return t;


}
void main(){
    int a[10];
    int i=0;
    printf("Enter five elements = ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("The largest number in array is %d ",largest(a,5));
}