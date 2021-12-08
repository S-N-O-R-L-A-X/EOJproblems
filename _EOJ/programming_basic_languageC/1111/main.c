#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,leg,head,c,s,temp;
    scanf("%d",&t);
    for(i=0;i<=t-1;i++)
    {
        scanf(" %d %d",&head,&leg);
        temp=4*head-leg;
        if(temp%2==0&&temp>=0&&head-temp/2>=0)
        {
            c=temp/2;
            s=head-temp/2;
            printf("case #%d:\n%d %d\n",i,c,s);
        }
        else
            printf("case #%d:\nImpossible\n",i);

    }
    return 0;
}
