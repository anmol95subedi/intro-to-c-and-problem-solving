#include<stdio.h>
void main()
{
    FILE *fp;
    int i=0;
    char c;
    fp=fopen("hello.txt","r");
    if(fp==NULL){
        printf("Error opening file !!!");
    }
    for(i=0;i<10;i++){
        fscanf(fp,"%c",&c);
        printf("%c",c);
    }
    fclose(fp);
}