#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a,b,amount;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        amount=0;
        scanf(" %d %d",&a,&b);
        amount=a/b;

        if(amount%5<3)
            amount=amount+amount/5*2;
        else
            amount=amount+amount/5*2+1;
        printf("%d\n",amount);
    }
    return 0;
}
