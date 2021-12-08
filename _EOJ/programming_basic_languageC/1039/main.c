#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,k,out,len;
    char str[21];
    while(scanf("%d",&n)!=EOF)
    {
        out=n;
        getchar();
        gets(str);
        len=strlen(str);
        k=len;
        if(n%len==0)
        {
            for(;n-k>=len;k=k+len)
            {
                out=out*(n-k);
            }
        }
        else
        {
            for(;n-k>=n%len;k=k+len)
            {
                out=out*(n-k);
            }
        }
        printf("%d\n",out);
    }

    return 0;
}
