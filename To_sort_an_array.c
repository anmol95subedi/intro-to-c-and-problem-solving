#include<stdio.h>
void main()
{
    int a[1000],i=0,j=0,temp,n;
    printf("Enter the size of array = \n\n");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Displaying array \n");
    for(i=0;i<n;i++){
        printf("%d\n\n",a[i]);
    }
}