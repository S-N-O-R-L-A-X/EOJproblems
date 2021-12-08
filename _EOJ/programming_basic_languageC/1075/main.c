#include <stdio.h>
#include <stdlib.h>

int count1(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        if((n&1)==1)
            cnt++; // �ж�n�Ķ��������һλ�ǲ���1
        n=n>>1; // ��������һλ
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
