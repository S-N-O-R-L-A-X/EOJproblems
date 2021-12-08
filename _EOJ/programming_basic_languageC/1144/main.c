#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,score;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int sum=0;
        int min=100;
        int max=0;
        int cnt=0;
        while(scanf(" %d",&score)&&score!=-1)
        {
            cnt++;
            sum+=score;
            if(score<min)
                min=score;
            if(score>max)
                max=score;
        }
        printf("case #%d:\n%d\n%d\n%d\n",i,max,min,sum/cnt);
    }
    return 0;
}
