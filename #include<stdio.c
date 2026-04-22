#include<stdio.h>
#include<string.h>
void main()
{
    FILE *fp;
    char c=Y,s;
    fp=fopen("welcome.txt","w");
    if(fp==NULL){
        printf("Error Opening File");
        exit(1);
    }
    
    while(strupr(c)="Y"){
        getc(s);
        printf("Do u want to keep entering ??? [Y for yes , N for no]");
        scanf("%d",c);
        fputc(c,fp);
    }
    
}