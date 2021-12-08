#include <stdio.h>
#include <stdlib.h>

int main()
{
    int out[20];
    int i=0;int a2,b2;//digit of a1,b1
    int c=0;//+1/0
    long long int a1,b1;
    while(scanf("%lld %lld",&a1,&b1)!=EOF)
    {
        if(a1<0&&b1>0||a1>0&&b1<0)
            printf("%lld\n",a1+b1);
        else if(a1>0)
        {
            while(a1>0||b1>0)
            {
                a2=a1%10;
                b2=b1%10;
                out[i]=(a2+b2+c)%10;
                c=(a2+b2+c)/10;
                a1=a1/10;
                b1=b1/10;
                i++;
            }
            if(c==1)
            {
                out[i] = 1;
                i++;
            }//in case length becomes longer
            for(i=i-1;i>=0;i--)
            {
                printf("%d",out[i]);
            }
            printf("\n");
            i=0;
        }
        else
        {
            a1=-a1;b1=-b1;
            while(a1>0||b1>0)
            {
                a2=a1%10;
                b2=b1%10;
                out[i]=(a2+b2+c)%10;
                c=(a2+b2)/10;
                a1=a1/10;
                b1=b1/10;
                i++;
            }
            printf("-");
            for(i=i-1;i>=0;i--)
            {
                printf("%d",out[i]);
            }
            printf("\n");
            i=0;
        }
    }


    return 0;
}
