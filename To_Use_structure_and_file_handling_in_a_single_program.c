#include<stdio.h>
#include<string.h>
struct employee{
    char name[20];
    int id;
    int salary;
};
void main(){
    FILE *fp;
    int i=0;
    struct employee e[10],v[10];
    fp=fopen("employeee.txt","w+");
    if(fp==NULL){
        printf("Error Opening FIle ");
    }
    printf("Enter details of employeee\n");
    for(i=0;i<10;i++){
        printf("Detail of %dth employee\n",i+1);
        printf("Name: ");
        scanf("%s",e[i].name);
        printf("Id: ");
        scanf("%d",&e[i].id);
        printf("Salary: ");
        scanf("%d",&e[i].salary);
        printf(" \n");
    }
    fwrite(e,sizeof(struct employee),10,fp);
    fclose(fp);
    fp=fopen("employeee.txt","r");
    fread(v,sizeof(struct employee),10,fp);
    printf("Name \t id\t salary\t");
    for(i=0;i<10;i++){
        if(v[i].salary>=50000){
            printf("%s    %d\t %d\n",v[i].name,v[i].id,v[i].salary);
        }

    }
    fclose(fp);
    
}