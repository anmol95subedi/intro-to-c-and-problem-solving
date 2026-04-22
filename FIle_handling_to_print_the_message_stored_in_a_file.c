#include<stdio.h>
void main()
{
    FILE *fp;
    char s[1000];
    fp=fopen("welcome.txt","r");
    if(fp==NULL){
        printf("Error Opening File");
        exit(1);
    }
    fgets(s,100,fp);
    printf("%s",s);
    fclose(fp);
}