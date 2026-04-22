#include<stdio.h>
struct students{
    char name[20];
    int roll;
    int marks;
};
void main(){
    struct students s[3];
    int i;
    printf("Enter the details of students \n\n");
    for(i=0;i<3;i++){
        printf("Enter details of %d student\n\n",i+1);
        printf("Enter name :");
        scanf("%s",s[i].name);
        printf("Enter roll :");
        scanf("%d",&s[i].roll);
        printf("Enter marks :");
        scanf("%d",&s[i].marks);
        printf("\n");
    }
    printf("Printing details of students with marks greater then 24 \n\n");
    printf("Name \t  Roll\t  Marks\t");
    for(i=0;i<3;i++){
        if(s[i].marks>24){
            printf("%s    %d\t %d",s[i].name,s[i].roll,s[i].marks);
        }

    }
}