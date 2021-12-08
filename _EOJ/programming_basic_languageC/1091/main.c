#include <stdio.h>
#include <stdlib.h>

int main()//if n! % n^2=0=>n是个>=4的合数
{
    //long long int n,i,out;
    int n,i,j,flag;

    while(scanf(" %d",&n)!=EOF)
    {
        int prime[60]={0};
        if(n%2==0)
        {
            if(n==4||n==2)
            {
                printf("NO\n");
                continue;
            }
            else
            {
                printf("YES\n");
                continue;
            }
        }
        else
        {

            j=0;
            for(i=3;i<=n;)
            {
                if(n%i==0)
                {
                    prime[j]=i;
                    n/=i;
                    j++;
                }
                else
                    i+=2;
            }
        }
        if(j==1)
            printf("NO\n");
        else
            printf("YES\n");

        /*flag=0;
        out=1;
        for(i=1;i<=n-1;i++)
        {
            out=out*i%n;
            if(out==0)
            {
                flag=1;
                break;
            }
        }
        if(n==1)
            printf("YES\n");
        else
        {
            if(flag)
                printf("YES\n");
            else
                printf("NO\n");
        }*/


    }
    return 0;
}
