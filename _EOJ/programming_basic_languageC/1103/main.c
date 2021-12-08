#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hole,a,b,i;
    while(scanf("%d",&hole)!=EOF)
    {
        a=hole/2;
        b=hole%2;
        if(b==0&&a==0)
            printf("1\n");
        else if(a==0)
            printf("0\n");
        else if(b!=0)
        {
            printf("4");
            for(i=1;i<=a;i++)
                printf("8");
            printf("\n");
        }
        else
        {
            for(i=1;i<=a;i++)
                printf("8");
            printf("\n");
        }



    }
    return 0;
}
