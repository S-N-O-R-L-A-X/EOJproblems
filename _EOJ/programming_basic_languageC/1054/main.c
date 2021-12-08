#include <stdio.h>
#include <stdlib.h>
int fact(int n)
{
    int i,out;
    out=1;
    for(i=1;i<=n;i++)
        out*=i;
    return out;
}

/*int Permutation(int m,int n)
{
    int i,out;
    for()
}*/

int Combination(int m,int n)
{
    int out;int i;out=1;
    for(i=n-m+1;i<=n;i++)
        out=out*i;
    for(i=1;i<=m;i++)
        out=out/i;
    return out;
}



int main()
{
    int m,n,k,i,out;
    while(scanf(" %d %d %d",&m,&n,&k)!=EOF)
    {
        out=1;
        if(m<n)
        {
            out=out*Combination(k,m);
            for(i=n-k+1;i<=n;i++)
            {
                if(i==0)
                    out=1;
                else
                    out=out*i;
            }
        }
        else
        {
            out=out*Combination(k,n);
            for(i=m-k+1;i<=m;i++)
            {
                if(i==0)
                    out=1;
                else
                    out=out*i;
            }
        }
    printf("%d\n",out);
    }
    return 0;
}
