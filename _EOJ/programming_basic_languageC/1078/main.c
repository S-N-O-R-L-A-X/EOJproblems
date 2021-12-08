#include <stdio.h>
#include <stdlib.h>
/*int drink(int s,int c)
{
    int rest,bottle,sum;
    bottle=0;rest=0;sum=0;
    if(s<c)
        return sum;
    else
    {
        bottle=s/c;
        sum=sum+s/c;
        return drink(s-bottle*c+bottle,c);
    }
}*/


int main()
{
    int e,f,c,bottle,sum,temp;

    while(scanf(" %d %d %d",&e,&f,&c)!=EOF)
    {
        sum=e+f;
        bottle=0;temp=0;
        while(1)
        {
            if(sum<c)
                break;
            else
            {
                temp=sum/c;
                bottle=bottle+temp;
                sum=sum-temp*c+temp;
            }
        }
        printf("%d\n",bottle);
    }
    return 0;
}
