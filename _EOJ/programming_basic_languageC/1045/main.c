#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,height,zone,room;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        room=0;
        zone=4;
        scanf(" %d",&height);
        for(j=height;j>=1;j--)
        {
            room=room+zone*j;
            zone=zone+8;
        }
        printf("%d\n",room);
    }
    return 0;
}
