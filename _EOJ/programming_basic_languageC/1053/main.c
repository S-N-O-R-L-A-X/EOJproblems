#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,i,j,n,fuck,min,out;
    while(scanf(" %d %d",&k,&n)!=EOF)
    {
        min=999999999;out=1;
        for(i=2;i<=k;i++)//control floor the elevator stops
        {
            fuck=0;
            for(j=2;j<=k;j++)
            {
                if(j<=i)
                    fuck=fuck+(i-j);
                else
                    fuck=fuck+(j-i)*n;
            }
            if(fuck<min)
            {
                min=fuck;
                out=i;
            }
        }
        printf("%d\n",out);
    }
    return 0;
}
