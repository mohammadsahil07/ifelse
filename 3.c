#include<stdio.h>
int main()  {
    int a;
    printf("please enter the number  ");
    scanf("%d",&a);
    if(a>0){printf("%d is the positive number",a);}
   else if(a<0){printf("%d is the negative number",a);}
   else{printf("%d is the zero",a);}
   return 0;
}