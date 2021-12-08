#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int h,m,s;
    while(scanf(" %d",&a)&&a!=-1)
    {
        h=a/3600;
        a=a%3600;
        m=a/60;
        s=a%60;
        if(h<10)
            printf("0");
        printf("%d:",h);
        if(m<10)
            printf("0");
        printf("%d:",m);
        if(s<10)
            printf("0");
        printf("%d\n",s);
    }
    return 0;
}
