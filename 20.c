#include<stdio.h>
int main()  {
    float cp,sp,p,l;
    printf("Please enter the cost price ");
    scanf("%f",&cp);
    printf("Please enter the selling price ");
    scanf("%f",&sp);
    if(sp>cp){p=sp-cp;printf("profit is %0.2f",p);}
    else if(sp<cp){l=cp-sp;printf("loss is %0.2f",l);}
    else{printf("neither profit nor loss");}
    return 0;


}