#include<stdio.h>
int main()
{
int n,l,r;
printf("enter the number");
scanf("%d",&n);
printf("left and right numbers");
scanf("%d%d",&l,&r);
if(n>l&&n<r)
{
	printf("yes");
}
else
{
	printf("no");
}
return 0;
}
