#include<stdio.h>
int main()
{
int a[50],min,max,i,n;
printf("enter the number");
scanf("%d",&n);
max=0;
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
min=0;
if(a[i]<min)
{
min=a[i];
}
}
return 0;
}
