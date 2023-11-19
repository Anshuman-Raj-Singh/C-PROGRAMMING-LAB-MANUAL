#include<stdio.h>
int main(){
    int n;
    printf("enter the length of the array:");
    scanf("%d",&n);
    int a[n],index=0,max=0,i;
    printf("enter the elements in the array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {max=a[i];
        index=i;}
    }
    printf("the maximum number is:%d\t",max);
    printf("the index is:%d",index);
    return 0;
}
