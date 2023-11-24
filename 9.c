#include<stdio.h>
int main()  {
    char ch;
    printf("please enter any character  ");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){printf("Character is alphabet");}
    else if(ch>='0' && ch<='9'){printf("character is digit");}
    else{printf("character is special character");}
    return 0;
    }
