#include <stdio.h>
int main()
{
    char a;
    printf("Enter any character: ");
    scanf("%c", &a);
    

    if((a >= 'a' && a <= 'z') || (a>= 'A' && a<= 'Z'))
    {
        printf("Character is an ALPHABET.");
    }
    else
    {
        printf("Character is NOT ALPHABET.");
    }

    return 0;
}