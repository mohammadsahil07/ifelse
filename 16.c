#include<stdio.h>
int main(){
    float a,b,c;
    printf("please enter the angles of triangle ");
    scanf("%f %f %f",&a,&b,&c);
    float sum=a+b+c;
    if(sum==180){printf("triangle is valid");}
    else{printf("invalid triangle");}
    return 0;
}