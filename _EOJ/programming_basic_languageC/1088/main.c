#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    char str[15];getchar();
    int a[n];
    int sum=0;
    double average,s;
    s=0;
    for(i=0;i<=n-1;i++)
    {
        scanf("%s",str);
        scanf(" %d",&a[i]);
        sum=sum+a[i];
    }
    average=(double)sum/n;
    for(i=0;i<=n-1;i++)
        s=s+(average-a[i])*(average-a[i]);

    s=s/n;
    s=sqrt(s);
    printf("%.2lf %.2lf\n",average,s);
    return 0;
}
