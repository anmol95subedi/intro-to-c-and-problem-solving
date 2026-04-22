#include<stdio.h>

void main()
{
    FILE *fp;
    char c='Y',s;
    fp=fopen("welcome.txt","w");
    if(fp==NULL){
        printf("Error Opening File");
        exit(1);
    }fflush(stdin);
    
    while(c=='Y'){
        s=getchar();
        printf("Do u want to keep entering ??? [Y for yes , N for no]");
        fflush(stdin);
        c=getchar();
        fputc(s,fp);
    }
    fclose(fp);
    
}