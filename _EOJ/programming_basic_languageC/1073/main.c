#include <stdio.h>
#include <stdlib.h>
int digit_recursion(unsigned int a)
{
    unsigned int s=0;
    if(a<10)
        return a;
    else
    {
        s=0;
        while(a>0)
        {
            s=s+a%10;
            a=a/10;
        }
        return digit_recursion(s);
    }

}

int main()
{
    int n,i;
    unsigned int x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %d",&x);
        printf("%d\n",digit_recursion(x));
    }
    return 0;
}
