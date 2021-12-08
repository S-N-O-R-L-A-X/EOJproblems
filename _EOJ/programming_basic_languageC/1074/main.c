#include <stdio.h>
#include <stdlib.h>

int GCD(int a,int b)
{
    if(b==0)
        return a;
    else
        return GCD(b,a%b);
}

int LCM(int a,int b)
{
    int out;
    out=a/GCD(a,b)*b;
    return out;
}

int main()
{
    int n,i,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %d %d",&a,&b);
        printf("%d %d\n",GCD(a,b),LCM(a,b));
    }
    return 0;
}
