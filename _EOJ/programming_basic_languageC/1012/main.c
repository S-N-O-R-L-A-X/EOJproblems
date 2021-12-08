#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*int isqrt(int n)
{
    int i=0;
    while(i*i<n)
        i++;
    return i;
}*/

int main()
{
    int n,m,i,j,cnt;
    double b;
    cnt=0;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        if(n<=3&&m>1)
        {
            cnt++;
            if(n<=2&&m>2)
                cnt++;
        }
        for(i=n;i<=m;i++)
        {

            b=sqrt(i);
            for(j=2;j<=b;j++)
            {
                if(i%j==0)
                    break;
                if(b-j<1)
                    cnt=cnt+1;
            }
        }
        printf("%d\n",cnt);
        cnt=0;
    }

    return 0;
}
