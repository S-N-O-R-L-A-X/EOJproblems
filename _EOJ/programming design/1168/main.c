#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long int GDB(long long int a,long long int b)
{
    if(b==0)
        return a;
    else
        return GDB(b,a%b);
}

long long int LCM(long long int x,long long int y)
{
    return x/GDB(x,y)*y;
}


int main()
{
    int t,i,j,k,len,num;
    char op;
    long long int a,b,c,d,dividend,divisor,temp;
    scanf("%d",&t);
    getchar();
    for(i=0;i<=t-1;i++)
    {
        scanf("%d",&num);
        getchar();
        scanf("%lld/%lld",&dividend,&divisor);
        while(1)
        {
            op=getchar();
            if(op=='\n')
                break;
            else if(op=='+')
            {
                scanf("%lld/%lld",&a,&b);
                dividend=dividend*b+a*divisor;
                divisor=divisor*b;
                temp=GDB(dividend,divisor);
                divisor=divisor/temp;
                dividend=dividend/temp;
            }
            else
            {
                scanf("%lld/%lld",&a,&b);
                dividend=dividend*b-a*divisor;
                divisor=divisor*b;
                temp=GDB(dividend,divisor);
                divisor=divisor/temp;
                dividend=dividend/temp;
            }
        }
        printf("case #%d:\n",i);
        temp=GDB(dividend,divisor);
        dividend=dividend/temp;
        divisor=divisor/temp;
        if(dividend%divisor==0)
            printf("%lld\n",dividend/divisor);
        else if(dividend==0)
            printf("0");
        else
        {
            if(divisor<0&&dividend>0)//in case situation like -1/14
                printf("-%lld/%lld\n",dividend,(-1)*divisor);
            else
                printf("%lld/%lld\n",dividend,divisor);
        }

    }
    return 0;
}
