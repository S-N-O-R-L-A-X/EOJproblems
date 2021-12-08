#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int weak,times,ans,i,j,n;

    i=0;j=1;
    int *cnt=(int)malloc(100000000*sizeof(int));
    while(i<=99999998)
    {
        if(j<=5)
        {
            cnt[i]=j;
            i++;
            j++;
        }
        else
        {
            cnt[i]=10-j;
            i++;
            j++;
        }
        if(j==8)
            j=1;
    }

    while(scanf("%d %d",&weak,&times)!=EOF)
    {
        n=0;
        for(i=0;i<=99999999;i++)
        {
            if(cnt[i]==weak)
                n++;
            if(n>=times)
            {
                break;
            }
        }
        printf("%d\n",i);
    }
    free(cnt);
    return 0;
}
*/
/*
int main()//循环节为1,2,3,4,5,4,3,2
{
    int weak,times,i,temp,cnt;
    while(scanf(" %d %d",&weak,&times)!=EOF)
    {
        temp=0;
        i=1;
        cnt=0;
        while(times>=temp)
        {
            if(i<=5)
            {
                if(i==weak)
                    {
                        temp++;
                        cnt++;
                    }

                else
                    {
                        cnt++;
                    }
            }
            else
            {
                if(10-i==weak)
                {
                    temp++;
                    cnt++;
                }
                else
                {
                    cnt++;
                }
            }
            i++;
            if(i==9)
                i=1;
        }
        printf("%d\n",cnt-1);
    }
}
*/
int main()//循环节为1,2,3,4,5,4,3,2
{
    int weak,times,cnt,i,j,round,delta;
    while(scanf(" %d %d",&weak,&times)!=EOF)
    {
        cnt=0;
        if(weak>=2&&weak<=4)
        {
            round=times/2;
            delta=times%2;
            if(delta==1)
                cnt=round*8+10-weak-1;
            else
                cnt=round*8+weak-1;
        }
        else
        {
            cnt=times*8+weak-1;
        }
        printf("%d\n",cnt);
    }
}
