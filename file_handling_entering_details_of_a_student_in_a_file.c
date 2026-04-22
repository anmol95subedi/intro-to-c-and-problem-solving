#include<stdio.h>
void main()
{
    FILE *fp;
    int i;
    char name[20];
    int roll_no,marks;
    fp=fopen("exam.txt","w");
    if(fp==NULL){
        printf("Error opening file!!!");
    }
    for(i=0;i<5;i++){
        printf("Enter name of %d student: ",i+1);
        scanf("%s",name);
        printf("Enter roll no :");
        scanf("%d",&roll_no);
        printf("Enter marks : ");
        scanf("%d",&marks);
        fprintf(fp,"Name : %s ROll No : %d Marks : %d",name,roll_no,marks);
    }
    fclose(fp);
}