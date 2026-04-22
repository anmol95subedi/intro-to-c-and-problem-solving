#include<stdio.h>
#include<string.h>
struct book{
    char name[20];
    int price;
};
void maxprice(struct book *b){
    int i=0,max_price;
    char name[20];
    strcpy(name,(*b).name);
    max_price=(*b).price;
    for(i=0;i<10;i++){
        if((*(b+i)).price>max_price){
            strcpy(name,(*(b+i)).name);
            max_price=(*(b+i)).price;
        }
    }
    printf("Name : %s \t Price : %d",name,max_price);
 
}
void main()
{
    struct book b[10];
    int i;
    printf("Enter details of 10 books \n");
    for(i=0;i<10;i++){
        printf("Details of %d book :\n",i+1);
        printf("Enter name : ");
        scanf("%s",b[i].name);
        printf("Enter price : ");
        scanf("%d",&b[i].price);
    }maxprice(b);
}