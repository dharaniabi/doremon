#include<stdio.h>
int main()
{
  char a[5],temp;
  int i;
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  temp=a[0];
  for(i=0;i<5;i++)
  {
    if(a[0]<a[i])
    {
      temp=a[i]);
    }
    printf("the largest number is %d":temp);
  }
}
