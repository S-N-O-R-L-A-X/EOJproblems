#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hp1,hp2;
    int at1,at2;
    while(scanf("%dvs%d",&hp1,&hp2)!=EOF)
    {
        scanf("%dvs%d",&at1,&at2);
        while(hp1>0&&hp2>0)
        {
            hp1=hp1-at2;
            hp2=hp2-at1;
        }
        if(hp1>0)
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}
