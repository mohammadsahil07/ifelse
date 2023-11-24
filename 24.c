#include<stdio.h>
int main(){
    int d;
    printf("please enter the number of days  ");
    scanf("%d",&d);
    int year=d/365;
    int weeks=(d%365)/7;
    int days=(d%365)%7;
    printf("%d years %d weeks %d days",year,weeks,days);
    return 0;
}