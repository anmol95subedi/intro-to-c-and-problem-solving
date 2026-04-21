#include<stdio.h>
void main(){
    int i,j,a[100][100],n,m,b[100][100];
    printf("Enter value of M x N\n");
    scanf("%d %d",&m,&n);
    printf("Enter  matrix elements : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter %d x %d th element : \n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            b[j][i]=a[i][j];
        }
    }
    printf("Printing matrix \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d \t",b[i][j]);
        }
        printf("\n");
    }
}