#include<stdio.h>
int main(){
    int choice;
    float radius,length,breadth,side;
    printf("choose:");
    printf("\n1=circle");
    printf("\n2=rectangle");
    printf("\n3=square");
    printf("\nenter the choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        printf("enter the radius:");
        scanf("%f",&radius);
        printf("\narea:%.2f",3.14*radius*radius);
        printf("\ncircumference:%.2f",2*3.14*radius);
    }
    else if(choice==2)
    {
        printf("enter the length and breadth:");
        scanf("%f%f",&length,&breadth);
        printf("\narea:%.2f",length*breadth);
        printf("\nperimeter:%.2f",2*(length+breadth));
    }
    else if(choice==3)
    {
        printf("enter the side:");
        scanf("%f",&side);
        printf("\narea:%.2f",side*side);
        printf("\nperimeter:%.2f",4*side);
    }
    return 0;
}
