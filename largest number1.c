#include <stdio.h>
int main()
{
    float n1, n2, n3;

    printf("Enter three numbers\n ");
    scanf("%f %f %f", &n1, &n2, &n3);

    if( n1>=n2 && n1>=n3 )
     {  
     printf("%.2f is largest number\n", n1);
     }
    if( n2>=n1 && n2>=n3 )
     {
     printf("%.2f is largest number\n", n2);
     }   
    if( n3>=n1 && n3>=n2 )
     {
     printf("%.2f is largest number\n", n3);
      }
    return 0;
}
