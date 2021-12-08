#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i;
    int x1,x2,x3,x4,y1,y2,y3,y4;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf(" %d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        if((x3>x1&&x3<x2)||(x4<x2&&x4>x1))
        {
            if((y3<y1&&y3>y2)||(y4>y2&&y4<y1))
                printf("Yes\n");
            else if(y3>=y1&&y4<=y2)
                printf("Yes\n");
            else
                printf("No\n");
        }
        else if(x3<=x1&&x4>=x2)
        {
            if((y3<y1&&y3>y2)||(y4>y2&&y4<y1))
                printf("Yes\n");
            else if(y3>=y1&&y4<=y2)
                printf("Yes\n");
            else
                printf("No\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
