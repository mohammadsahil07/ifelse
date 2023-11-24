#include<stdio.h>
int main() {
    float unit,bill,total;
    printf("please enter the number of units");
    scanf("%f",&unit);
    if(unit<=50){bill=0.5*unit;total=bill+(0.2*bill);printf("Electricity bill is %0.2f",total);}
    else if(unit>50 && unit<=150){bill=(0.75*(unit-50))+25;total=bill+(0.2*bill);printf("Electricity bill is             %0.2f",total);}   
     else if(unit>150 && unit<=250){bill=(1.2*(unit-150))+100;total=bill+(0.2*bill);printf("Electricity bill is %0.2f",total);}
    else if(unit>250){bill=(1.5*(unit-250))+220;total=bill+(0.2*bill);printf("Electricity bill is %0.2f",total);}
    return 0;
}
