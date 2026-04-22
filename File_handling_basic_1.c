#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("hello.txt","w");
    if(fp==NULL){
        printf("Error Opening File");
        exit(1);
    }
    fprintf(fp,"hello this is my first file handling ");
    fclose(fp);
}