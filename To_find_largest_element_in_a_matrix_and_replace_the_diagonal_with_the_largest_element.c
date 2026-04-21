#include<stdio.h>
void main(){
    int a[100][100],i,j,m,n,l;
    printf("Enter the value of M x N\n\n");
    scanf("%d %d",&m,&n);
    printf("Enter  matrix elements : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter %d x %d th element : \n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }\
    l=a[0][0];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]>l){
                l=a[i][j];
            }
        }
    }
    for(i=0;i<m;i++){
        a[i][i]=l;
    }
    printf("Printing the matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}