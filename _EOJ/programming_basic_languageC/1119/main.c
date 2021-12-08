#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf(" %d %d",&a,&b);
        if(a==0)
            printf("LBB made no coffee today.\n");
        else if(a==1)
            printf("LBB made a cup of coffee today.\n");
        else
            printf("LBB made %d cups of coffee today.\n",a);

        if(b==0)
            printf("JDG made no coffee today.\n");
        else if(b==1)
            printf("JDG made a cup of coffee today.\n");
        else
            printf("JDG made %d cups of coffee today.\n",b);

        if(a+b==0)
            printf("BOSS had no coffee today.\n");
        else if(a+b==1)
            printf("BOSS had a cup of coffee today.\n");
        else
            printf("BOSS had %d cups of coffee today.\n",a+b);
    }
    return 0;
}
