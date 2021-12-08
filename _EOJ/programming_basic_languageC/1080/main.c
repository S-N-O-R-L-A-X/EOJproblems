#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int c,t,n;
    double temp;
    int out;
    while(scanf(" %d %d",&n,&c)!=EOF)
    {
        if(n==0)
            printf("0\n");
        else /*if(c/(2*n)>0)*/
        {
            temp=(double)c/(2*n);
            if(temp-(int)temp<=0.5)
            {
                out=(int)temp;
                printf("%d\n",out);
            }
            else
            {
                out=round(temp);
                printf("%d\n",out);
            }
        }


    }
    return 0;
}
