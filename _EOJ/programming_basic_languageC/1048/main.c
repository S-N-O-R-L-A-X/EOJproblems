#include <stdio.h>
#include <stdlib.h>

int main()//the formula is (n^3+5n)/6+1
{
    int n,i,j,l;

    while(scanf(" %d",&n)&&n!=0)
    {
        int sum=0;
        int j=1;
        for(i=1;i<=3;i++)
            j=j*n;
        sum+=j;
        sum=sum+5*n;
        sum/=6;
        sum++;
        printf("%d\n",sum);
    }
    return 0;
}
