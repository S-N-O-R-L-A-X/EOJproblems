#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a,b,c,cnt;
    scanf("%d",&n);
    cnt=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        c=a+b;
        if(c==0)
            printf("1");
        else
        {
              while(c>0)
            {
                cnt=cnt+1;
                c=c/10;
            }
        }
        printf("%d\n",cnt);
        cnt=0;
    }

    return 0;
}
