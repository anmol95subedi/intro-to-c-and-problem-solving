#include<stdio.h>
#include<string.h>
void main()
{
    FILE *fp1,*fp2;
    int c;
    fp1=fopen("Exam.txt","r");
    fp2=fopen("output.txt","w");
    if(fp1==NULL || fp2==NULL){
        printf("Error Opening Files !!!!!!");
    }
    while((c=fgetc(fp1))!=EOF){
        if(c!=' '){
            fputc(fp2,c);
        }
    }
    fclose(fp1);
    fclose(fp2);

}