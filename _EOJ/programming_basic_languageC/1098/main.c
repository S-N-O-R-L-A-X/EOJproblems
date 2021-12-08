#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int combination(int n,int m)
{
    long long int i,out;
    out=1;
    for(i=1;i<=m;i++)
        out=out*(n-m+i)/i;
    return out;
}

int main()
{
    int w,d,l,n,p,i,j;
    double p1,p2,p3,sum;
    while(scanf(" %d %d",&n,&p))
    {
        sum=0;
        if(n==0&&p==0)
            break;
        scanf(" %d %d %d",&w,&d,&l);
        p1=(double)w/(w+d+l);
        p2=(double)d/(w+d+l);
        p3=(double)l/(w+d+l);
        if(p==0)
            printf("1.00\n");
        else//under pressure
        {
            if(p1<1E-9)//no wins
            {
                if(p2<1E-9)//no draws
                    sum=0;
                else
                {
                    for(j=0;j<=n-i;j++)//d
                    {
                        if(j>=p)
                            sum=sum+combination(n,j)*pow(p2,j);
                    }
                }
            }
            else
            {
                if(p2<1E-9)//no draws
                {
                    for(i=0;i<=n;i++)//w
                    {
                        if(3*i>=p)
                            sum=sum+combination(n,i)*pow(p1,i)*pow(1-p1,n-i);
                    }
                }
                else
                {
                    for(i=0;i<=n;i++)//w
                    {
                        for(j=0;j<=n-i;j++)//d
                        {
                            if(3*i+j>=p)
                            {
                                sum=sum+combination(n,i)*pow(p1,i)*combination(n-i,j)*pow(p2,j);
                            }
                        }
                    }
                }

            }
            for(i=0;i<=n;i++)//w
                {
                    for(j=0;j<=n-i;j++)//d
                    {
                        if(3*i+j>=p)
                        {
                            sum=sum+combination(n,i)*pow(p1,i)*combination(n-i,j)*pow(p2,j);
                        }
                    }
                }
            sum=100*sum;
            printf("%.1lf\n",sum);
        }

    }
    return 0;
}
