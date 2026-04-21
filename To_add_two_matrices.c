#include<stdio.h>
void main()
{
    int a[100][100],b[100][100];
    int i,j,m,n;
    printf("Enter the value of M X N for the two matrix =\n");
    scanf("%d %d",&m,&n);
    printf("Enter first matrix elements : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter %d x %d th element : \n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second matrix elements : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter %d x %d th element : \n",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Adding matrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            a[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Printing matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d \t",a[i][j]);
            
        }
        printf("\n");
    }
}