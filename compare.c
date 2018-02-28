#include<stdio.h>
int main()
{
char string[25];
int str1,str2,i,j;
printf("enter the string");
scanf("%s",&str1);
printf("enter the string");
scanf("%s",&str2);
for(i=0;str1[i]!='\0';i++)
{
for(j=0;str2[j]='\0';j++)
{
str1[i]=str2[j];
}
str1[i]='\0';
printf("\n the compared string is%s",str1[i],str2[j]);
}
return 0;
}
