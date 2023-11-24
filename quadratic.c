#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float x,y;
    printf("please enter the coefficients of the quadratic equation ");
    scanf("%d%d%d",&a,&b,&c);
    float d=b*b-(4*a*c);
    if(d<0){printf("Roots are imaginary ");}
    else{
        x=((-b)+(pow(d,0.5)))/(2*a);
        y=((-b)-(pow(d,0.5)))/(2*a);
        printf("%0.2f and %0.2f",x,y);
    }
    return 0;
    
}