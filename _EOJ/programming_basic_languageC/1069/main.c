#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%15==0)
            printf("DeadMan\n");
        else if(i%3==0)
            printf("Dead\n");
        else if(i%5==0)
            printf("Man\n");
        else
            printf("%d ",i);
    }
    return 0;
}
