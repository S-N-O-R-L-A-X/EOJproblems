#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,m,d,delta;
    scanf("%d",&n);
    int month[9]={31,28,31,30,31,30,31,31,30};
    delta=21;
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&m,&d);
        if(m==10)
        {
            if(d>21)
                printf("What a pity, it has passed!\n");
            else if(d==21)
                printf("It's today!!\n");
            else
                printf("%d\n",21-d);
        }
        else if(m>10)
            printf("What a pity, it has passed!\n");
        else
        {
            delta=month[m-1]-d+delta;
            for(j=m;j<=8;j++)
                delta=delta+month[j];
            printf("%d\n",delta);
            delta=21;
        }
    }
    return 0;
}
