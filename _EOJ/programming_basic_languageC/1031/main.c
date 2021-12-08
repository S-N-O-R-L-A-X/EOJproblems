#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,i,j,max,min,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %d",&num);
        for(j=1;j<=num;j++)
        {
            scanf(" %d",&temp);
            if(j==1)
            {
                max=temp;
                min=temp;
            }
            else
            {
                if(temp>max)
                    max=temp;
                if(temp<min)
                    min=temp;
            }
        }
        printf("%d\n",2*(max-min));

    }

    return 0;
}
