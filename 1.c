#include<stdio.h>
int main()  {
    int a,b;
    printf("please enter the number  ");
    scanf("%d %d",&a,&b);
    if(a>b){printf("%d is the biggest number",a);}
   else if(a<b){printf("%d is the biggest number",b);}
   else{printf("both numbers are equal");}
   return 0;
}