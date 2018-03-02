#include<stdio.h>
int main()
{
  char a[10];
  int i,numbers,maximum;
  printf("\n enter the numbers");
  scanf("%d",& numbers);
  for(i=0;i<=10;i++)  
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<10;i++)
  {
    if(a[i]>maximum)
    {
      maximum=a[i];
    }
    printf("the maximum number is%d";maximum);
  }
}
