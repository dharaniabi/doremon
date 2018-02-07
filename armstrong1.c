#include <stdio.h>
void main()
{
    int number,sum, rem,temp;
 
    printf ("enter a number");
    scanf("%d", &number);
    temp = number;
    while (number != 0)
    {
        rem = number % 10;
        sum = sum + rem;
        number = number / 10;
    }
    if (sum == temp)
        printf ("The given no is armstrong no");
    else
        printf ("The given no is not a armstrong no");
}
