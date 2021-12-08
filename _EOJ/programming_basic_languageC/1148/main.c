#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long n,i;
    scanf("%lld",&n);
    bool flag=true;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)//judge whether is a prime
        {
            flag=false;
            break;
        }
    }
    if(flag)//is a prime
        printf("1");
    else
        printf("2");


    return 0;
}
