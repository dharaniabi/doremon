#include<stdio.h>
int main()
{
char string[25];
int str1,str2,i,j;
printf("enter the string");
scanf("%s",&str1);
printf("enter the string");
scanf("%s",&str2);
for(i=0;str1[i]!='\o';i++)
{
for(j=0;str2[j]='\o';j++)
{
str1[i]=str2[j];
}
str1[i]='\o';
printf("\n the concatenated string is%s",str1[i]);
}
return 0;
}
