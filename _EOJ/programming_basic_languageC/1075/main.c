#include <stdio.h>
#include <stdlib.h>

int count1(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        if((n&1)==1)
            cnt++; // 判断n的二进制最后一位是不是1
        n=n>>1; // 数据右移一位
    }
    return cnt;
}

int count0(int n)
{
    int cnt=0;
    while(n>0)
    {
        if((n&1)==0)
            cnt++;
        n=n>>1;
    }
    return cnt;

}

int main()
{
    int n,i,x,cnt0,cnt1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %d",&x);
        cnt0=count0(x);
        cnt1=count1(x);
        printf("%d %d\n",cnt0,cnt1);

    }
    return 0;
}
