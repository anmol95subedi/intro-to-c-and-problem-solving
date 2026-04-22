#include<stdio.h>
void main()
{
    FILE *fp;
    int i=0,c;
    fp=fopen("hello.txt","r");
    if(fp==NULL){
        printf("Error opening file\n");
        return 0;
    }
    while((c=fgetc(fp))!=EOF){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            i++;
        }
    }
    printf("%d",i);
    fclose(fp);
}