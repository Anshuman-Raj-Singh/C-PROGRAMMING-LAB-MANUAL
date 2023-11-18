#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    (num%2==0)? printf("even",num):printf("odd",num);
}
