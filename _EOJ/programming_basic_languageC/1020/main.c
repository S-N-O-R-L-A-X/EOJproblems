#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long int a,b,i;

    scanf("%lld",&a);
    /*for(i=0;i<=;i++)
    {
        if(i*i>=a)
        {
            printf("%lld",i);
            break;
        }
    }*/
    b=sqrt(a)+1-1E-7;
    printf("%lld",b);
    return 0;
}
