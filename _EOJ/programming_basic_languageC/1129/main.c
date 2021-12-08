#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,j,n;
    char str[81];
    scanf("%d",&t);
    for(i=0;i<=t-1;i++)
    {
        scanf("%s",str);
        scanf(" %d",&n);
        printf("case #%d:\n",i);
        for(j=1;j<=n;j++)
            printf("%s",str);
        printf("\n");
    }
    return 0;
}
