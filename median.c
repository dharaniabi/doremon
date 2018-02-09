#include<stdio.h>
int main()
{
  char a[3],temp;
  int i;
  for(i=0;i<3;i++)
  {
    scanf("%d",&a[i]);
  }
  temp=a[0];
  for(i=0;i<3;i++)
  {
    if(a[0]<a[i])
    {
      temp=a[i]);
    }
    printf("the median number is %d":temp);
  }
}
