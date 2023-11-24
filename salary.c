#include<stdio.h>
int main(){
    float a,b;
    printf("please enter your salary ");
    scanf("%f",&a);
    if(a<=10000){b=a+(0.2*a)+(0.8*a);printf("Gross Salary is %0.2f",b);}
    else if (a<=20000 && a>10000){b=a+(0.25*a)+(0.9*a);printf("Gross Salary is %0.2f",b);}
    else if(a>20000){b=a+(0.3*a)+(0.95*a);printf("Gross Salary is %0.2f",b);}
    return 0;
}