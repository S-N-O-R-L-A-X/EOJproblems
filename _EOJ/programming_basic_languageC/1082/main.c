#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t,sweet,sum,paper;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf(" %d",&sweet);
        sum=sum+sweet;
        paper=sweet;
        while(paper>=3)
        {
            sweet=paper/3;
            paper=paper%3+sweet;
            sum=sum+sweet;
        }
        printf("%d\n",sum);
    }
    return 0;
}
