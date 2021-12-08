#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>168)
    {
        if(b>168)
        {
            if(c>168)
                printf("NO CRASH");
            else
            printf("CRASH %d",c);
        }
        else
            printf("CRASH %d",b);
    }
    else
        printf("CRASH %d",a);
    return 0;
}
