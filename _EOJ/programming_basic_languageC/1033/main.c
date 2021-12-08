#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int power(int a,int n)
{
    int i,ret;
    ret=1;
    for(i=1;i<=n;i++)
    {
        ret=ret*a;
    }
    return ret;
}

/*
int length(int n)
{
    int len=0;
    if(n==0)
        return 1;
    while(n>0)
    {
        n=n/10;
        len++;
    }
    return len;
}


int main()
{
    int n,len,ans;
    while(scanf("%d",&n)!=EOF)
    {
        ans=0;
        len=length(n);
        ans=ans+power(4,len-1);
        for()
    }
    return 0;
}
*/

/*int judge(int n)
{
    if(n==9)
        return 3;
    else if(n==4)
        return 2;
    else if(n==1)
        return 1;
    else
        return 0;
}

int main()
{
    char str[20];
    int len,i,j,ans;
    while(scanf("%s",str)!=EOF)
    {
        ans=0;
        len=strlen(str);
        ans=ans+power(4,len-1);//calculate the number <= power(10,n)
        for(i=0;i<=len-1;i++)
        {
            j=judge(str[i]-'0');
            if(j>0)
            {
                ans=ans+j*power(4,len-1-i);
            }

        }
    }
}
*/
/*
int main()
{
    int n,i,j,len,ans,delta;
    while(scanf("%d",&n)!=EOF)
    {

        for(i=1;i<=n;i++)
        {
            if(n<=power(4,i))
            {
                len=i;
                break;
            }
        }//know the length of n
        i--;
        delta=n-power(4,len-1);
        ans=power(10,len-1);
        while(delta>0)
        {
            for(j=3;j>=1;j--)
            {
                if(delta-power(4,i)*j>=0)
                {
                    ans=ans+power(10,i)*power(j,2);
                    delta=delta-power(4,i)*j;
                }
                if(j==1)
                    i--;
            }
        }
        printf("%d\n",ans);
    }
}
*/       //time exceed
int main()//ans approach
{
    int n,i,j,len,delta;
    long long int ans;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<=n;i++)
        {
            if(n<pow(4,i))
            {
                len=i;
                break;
            }
        }//know the length of n
        ans=0;
        delta=n;
        i--;
        while(i>=0)
        {
            for(j=3;j>=1;j--)//control the digit of weight
            {
                if(delta-pow(4,i)*j>=0)//judge whether j is a right weight
                {
                    ans=round(ans+pow(10,i)*pow(j,2));//approach to the ans
                    delta=round(delta-pow(4,i)*j);//diminish the delta
                }
                if(j==1)
                    i--;//the weight is too big,so diminish
            }
        }
        printf("%lld\n",ans);
    }
}
