#include<stdio.h>
int main()  {
    float a,b,c;
    printf("please enter the three sides");
    scanf("%f %f %f",&a,&b,&c);
    if((a+b>c)||(a+c>b)||(b+c>a)){printf("These are the sides of a triangle");}
    else{printf("these are not the sides of a triangle");}
    return 0;
}