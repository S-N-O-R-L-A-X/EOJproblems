#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count(char ch)
{
    int cnt=0;
    int x=1;
    for(int i=1;i<=8;i++)
    {
        if(ch&x)
            cnt++;
        x=x<<1;
    }
    return cnt;
}

int GDB(int a,int b)
{
    if(b==0)
        return a;
    return GDB(b,a%b);
}

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char str[121];
    for(int i=0;i<n;i++)
    {
        gets(str);
        int len=strlen(str);
        int sum=0;
        for(int j=0;j<len;j++)
            sum+=count(str[j]);
        len*=8;
        int a=sum/GDB(sum,len);
        int b=len/GDB(sum,len);
        if(a)
            printf("%d/%d\n",a,b);
        else
            printf("0\n");
    }
    return 0;
}
