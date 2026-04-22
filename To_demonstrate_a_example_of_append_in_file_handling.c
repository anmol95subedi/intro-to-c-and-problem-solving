#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("hello.txt","a");
    if(fp==NULL){
        printf("Error Opening FIle !!!");
        return 0;
    }
    fprintf(fp,"Adding this sentence in hello.txt");
    fclose(fp);

}