#include<stdio.h>
struct vechicle{
    char brandname[20];
    int year;
};
void main()
{
    struct vechicle v[1000];
    int n,i=0;
    FILE *fp;
    fp=fopen("Vechicle.txt","w");
    printf("Enter the value of n =\n");
    scanf("%d",&n);
    printf("Enter the details of vehicles\n");
    for(i=0;i<n;i++){
        printf("Enter name ;");
        scanf("%s",v[i].brandname);
        printf("Enter year :");
        scanf("%d",&v[i].year);
        printf("\n");
        fprintf(fp,"Name : %s     Year : %d ",v[i].brandname,v[i].year);
    }
}