#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;int sum=0;
    double average;
    for(i=0;i<n;i++)
        scanf(" %d",&a[i]);
    for(i=n-1;i>=0;i--)
    {
        sum+=a[i];
        printf("%d ",a[i]);
    }
    printf("\n%d",sum);
    average=(double)sum/n;
    printf(" %.2lf",average);
    return 0;
}
