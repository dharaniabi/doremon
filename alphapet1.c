#include <stdio.h>

int main()
{
    float ch;
    printf("Enter any character\n ");
    scanf("%c", &ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Character is an ALPHABET\n");
    }
    else
    {
        printf("Character is NOT ALPHABET\n");
    }

    return 0;
}
