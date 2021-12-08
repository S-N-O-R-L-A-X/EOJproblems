#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k;
    double out1,out2;

    while(scanf(" %d",&n)!=EOF)
    {
        out1=0;j=0;out2=0;k=0;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
            scanf(" %d",&a[i]);
            if(a[i]%2==1)
            {
                out1=out1+a[i];
                j++;
            }
            else
            {
                out2=out2+a[i];
                k++;
            }
        }
        if(j==0)
            printf("None ");
        else
            printf("%.3lf ",out1/j);
        if(k==0)
            printf("None\n");
        else
            printf("%.3lf\n",out2/k);
    }
    return 0;
}
