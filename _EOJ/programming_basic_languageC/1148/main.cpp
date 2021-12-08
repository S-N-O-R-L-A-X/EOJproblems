#include <iostream>
#include <cmath>
using namespace std;
/*
reference:goldbach conjecture
Every even integer(>2) can be expressed as the sum of two primes
Every odd number(>5) can be expressed as the sum of three primes(may be less)
*/
int main()
{
    long long n;
    scanf("%lld",&n);
    bool flag=true;
    for(int i=2;i<=sqrt(n);i++)
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
    {
        if(n%2==1)//odd
        {
            int m=n-2;
            bool flag2=true;
            for(int i=2;i<=sqrt(m);i++)//find whether m is a prime
            {
                if(m%i==0)//judge whether m is a prime
                {
                    flag2=false;
                    break;
                }
            }
            if(flag2)//m is a prime,so n=m+2
                printf("2");
            else
                printf("3");
        }

        else//even:goldbacch conjecture
            printf("2");
    }

    return 0;
}
