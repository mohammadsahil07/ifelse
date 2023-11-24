#include<stdio.h>
int main()  {
    int a;
    printf("please enter the number  ");
    scanf("%d",&a);
    if((a%5==0)&&(a%11==0)){printf("%d is divisible by 5 and 11 both",a);}
   else{printf("%d is not divisible by 5 and 11 both",a);}
   return 0;
}