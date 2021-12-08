#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int price;
    char str[6];
}keyboard;

int main()
{
    int t,i,a,b,c,m,p;
    keyboard item[300];
    scanf("%d",&t);
    for(i=0;i<=t-1;i++)
    {
        scanf(" %d %d %d",&a,&b,&c);
        scanf(" %d",&m);
        for(j=0;j<=m-1;j++)
            scanf(" %d %s",&item[j].price,&item[j].str);

    }
    return 0;
}
