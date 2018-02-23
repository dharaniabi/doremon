#include <stdio.h>
#include <string.h>
void swap(int*, int *);
void main()
{
    int a,b;
    printf("\nEnter the numbers to swap");
    scanf("%d %d", &a, &b);
    printf("\nThe values before swapping");
    swap(&a,&b)
    }
void swap(int *c, int *e)
{
    *c = *c ^ *e;
    *e = *c ^ *e;
    *c = *c ^ *e;
}
