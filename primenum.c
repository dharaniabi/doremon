#include <stdio.h>
int main()
{
    int n, i, flag;
    printf("Enter a positive integer");
    scanf("%d",&n);
    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("n is a prime number.",n);
    else
        printf("n is not a prime number.",n);
    
    return 0;
}
