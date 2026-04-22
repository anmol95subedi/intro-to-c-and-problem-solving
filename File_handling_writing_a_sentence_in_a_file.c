#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("welcome.txt","w");
    if(fp==NULL){
        printf("Error Opening File");
        exit(1);
    }
    fputs("Welcome to my file",fp);
    printf("Success !!!");
    fclose(fp);
}