#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,cnt1,cnt2;
    int a[10];
    scanf("%d",&n);
    printf("Lumberjacks:\n")
    for(i=1;i<=n;i++)
    {
        cnt1=0;cnt2=0;
        for(j=0;j<=9;j++)
            scanf(" %d",&a[j]);
        for(j=0;j<=8;j++)
        {
            if(a[j]<a[j+1])
                cnt1++;
            else
                cnt2++;
        }
        if(cnt1==0||cnt2==0)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
    return 0;
}
