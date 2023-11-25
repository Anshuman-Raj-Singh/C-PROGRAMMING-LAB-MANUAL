//two dimensional array
#include<stdio.h>
void main(){
    int m,n;
    printf("enter the limits:");
    scanf("%d%d",&m,&n);
    int a[m][n],i,j;
    printf("array elements:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
        }

        int max=a[0][0];
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(max<a[i][j])
                max=a[i][j];
            }
        }
        printf("the greatest element is %d\n",max);
        printf("the matrix is:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
            printf("\n");
        }
}
