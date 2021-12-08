#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,w,d,select,delta,standard;
    while(scanf("%d %d %d %d",&N,&w,&d,&select)!=EOF)
    {
        standard=w*(N-1)*N/2;//N-1 BUSKETS
        delta=standard-select;
        if(delta==0)
            printf("%d\n",N);
        else
            printf("%d\n",delta/d);
    }
    return 0;
}
