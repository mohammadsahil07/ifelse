#include<stdio.h>
int main()  {
    float a,b,c;
    printf("Please enter the sides of the triangle  ");
    scanf("%f%f%f",&a,&b,&c);
    if((a==b)&&(b==c)){printf("Equilateral triangle");}
    else if((a==b)||(b==c)||(a==c)){printf("Isosceles triangle");}
    else{printf("Scalene triangle");}
    return 0;
}