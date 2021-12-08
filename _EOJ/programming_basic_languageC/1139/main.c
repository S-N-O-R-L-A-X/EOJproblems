#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1001],b[1001];
    int len1,len2,i,j,k,cnt,co,longer;
    while(scanf("%s",a))
    {
        cnt=0;
        co=0;
        getchar();
        scanf("%s",b);
        if(a[0]=='0'&&b[0]=='0')
            break;
        len1=strlen(a);
        len2=strlen(b);
        if(len1>len2)
        {
            for(i=len2;i>=0;i--)
            {
                longer=len1-len2+i;
                if(a[longer]-'0'+b[i]-'0'+co>=10)
                {
                    cnt++;
                    co=1;
                }
                else
                    co=0;
            }
            for(j=len1-len2-1;j>=0;j--)
            {
                if(a[j]-'0'+co>=10)
                {
                    cnt++;
                    co=1;
                }
                else
                    break;
            }
        }
        else
        {
            for(i=len1;i>=0;i--)
            {
                longer=len2-len1+i;
                if(a[i]-'0'+b[longer]-'0'+co>=10)
                {
                    cnt++;
                    co=1;
                }
                else
                    co=0;
            }
            for(j=len2-len1-1;j>=0;j--)
            {
                if(b[j]-'0'+co>=10)
                {
                    cnt++;
                    co=1;
                }
                else
                    break;
            }
        }
        getchar();
        printf("%d\n",cnt);
    }
    return 0;
}
