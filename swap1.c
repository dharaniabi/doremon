#include<stdio.h>
void swap(int*,int*)
void main()
{
int a,b;
printf("enter the numbers to swap");
scanf("%d%d",&a,&b);
printf("the values before swapping");
scanf("%d%d",a,b);
swap(&a,&b)
}
void swap(int*e,int*f)
{
int*temp;
*temp=*e;
*e=*f;
*f=*temp;
printf("the swapping values are,*e,*f);
}
