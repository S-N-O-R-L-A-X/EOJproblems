#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,h,m,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %d:%d:%d",&h,&m,&s);
        if(h<7)
            printf("You are living a healthy life!\n");
        else
        {
            if(h>=8||m>50)
                printf("You are late!\n");
            else if(m<=50&&m>45)
                printf("Hurry up!\n");
            /*else if(m>=40&&m<=45)
                printf("")*/
            else
                printf("You are living a healthy life!\n");
        }
    }
    return 0;
}
