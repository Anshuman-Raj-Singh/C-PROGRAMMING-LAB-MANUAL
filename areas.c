#include<stdio.h>
int main(){
    float c;
    float s;
    float length,breadth;

//rectangle

    printf("enter the length");
    scanf("%f",&length);
    printf("enter the breadth");
    scanf("%f",&breadth);
    printf("area:%f\n",length*breadth);
    printf("perimeter:%f\n",2*(length+breadth));

//square

    printf("enter the side");
    scanf("%f",&s);
    printf("area:%.2f\n",s*s);
    printf("perimeter:%.2f\n",4*s);

//circle

    printf("enter the radius");
    scanf("%f",&c);
    printf("area:%.2f\n",3.14*c*c);
    printf("circumference:%.2f\n",2*3.14*c);
    return 0;
}
