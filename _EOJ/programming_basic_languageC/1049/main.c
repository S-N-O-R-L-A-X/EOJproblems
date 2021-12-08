#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int book[n];
    for(i=0;i<=n-1;i++)
    {
        scanf(" %d",&book[i]);
    }
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-2-i;j++)
        {
            if(book[j]>book[j+1])
            {
                temp=book[j];
                book[j]=book[j+1];
                book[j+1]=temp;
            }
        }
    }

    for(i=0;i<=n-1;i++)
        printf("%d\n",book[i]);
    return 0;
}
