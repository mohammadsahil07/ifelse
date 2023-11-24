#include<stdio.h>
int main()  {
    float phy,chem,bio,maths,comp,p;
    printf("Please enter the marks of physics ");
    scanf("%f",&phy);
     printf("Please enter the marks of chemistry ");
    scanf("%f",&chem);
     printf("Please enter the marks of biology ");
    scanf("%f",&bio);
     printf("Please enter the marks of maths ");
    scanf("%f",&maths);
     printf("Please enter the marks of computer ");
    scanf("%f",&comp);

    p=(phy+chem+bio+maths+comp)/5;

    if(p>=90 && p<=100){printf("Congratulations you scored %0.2f percent. Grade 'A'",p);}
    else if(p>=80 && p<90){printf("Congratulations you scored %0.2f  percent. Grade 'B'",p);}
    else if(p>=70 && p<80){printf("Congratulation you scored %0.2f percent. Grade 'C'",p);}
    else if(p>=60 && p<=70){printf("Congratulations you scored %0.2f percent. Grade 'D'",p);}
   else if(p>=40&& p<60){printf("Congratulations you scored %0.2f percent. Grade 'E'",p);}
    else if(p>=0 && p<40){printf("Work hard! you scored %0.2f percent. Grade 'F'",p);}

    return 0;
}