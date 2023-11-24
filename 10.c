#include<stdio.h>
int main()  {
    char ch;
    printf("please enter any character  ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){printf("Character is lowercase");}
    else if((ch>='A' && ch<='Z')){printf("character is uppercase");}
    return 0;
    }

