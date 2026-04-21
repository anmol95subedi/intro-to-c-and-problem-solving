#include<stdio.h>
void main()
{
    int a[2][3];
    int i,j;
    printf("Enter your 2x3 matrix");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("printing the given matrix \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}