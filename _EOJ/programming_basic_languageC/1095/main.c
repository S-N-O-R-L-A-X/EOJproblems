#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,money,h,t5,t2,t1,five,one;
    scanf("%d",&t);
    for(i=0;i<=t-1;i++)
    {
        scanf(" %d",&money);
        h=money/100;
        money=money%100;
        t5=money/50;
        money=money%50;
        t2=money/20;
        money=money%20;
        t1=money/10;
        money=money%10;
        five=money/5;
        money=money%5;
        one=money;
        printf("case #%d:\n",i);
        printf("%d %d %d %d %d %d\n",h,t5,t2,t1,five,one);


    }
    return 0;
}
