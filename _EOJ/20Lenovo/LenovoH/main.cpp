#include <iostream>
#define mod 998244353
#define maxsize 501
using namespace std;
unsigned long long growth[maxsize][maxsize];
unsigned long long ground[maxsize][maxsize];

void grow(long long start,long long end,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ground[i][j]+=(((end-start)%mod*growth[i][j])%mod);
        }
    }
}

unsigned long long mow(char rc,int no,int n,int m)
{
    unsigned long long ans=0;
    if(rc=='r')
    {
        for(int j=0;j<m;j++)
        {
            ans=(ans+ground[no-1][j])%mod;
            ground[no-1][j]=0;
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            ans=(ans+ground[i][no-1])%mod;
            ground[i][no-1]=0;
        }
    }
    return ans;
}
/*
unsigned long long GrowandMow(int start,int end,char rc,int no,int n,int m)
{
    unsigned long long ans=0;
    if(rc=='r')
    {
        for(int i=0;i<n;i++)
        {
            if(i==no-1)
                continue;
            for(int j=0;j<m;j++)
            {
                ground[i][j]+=(growth[i][j]*(end-start));
            }
        }
        for(int j=0;j<m;j++)
        {
            ans=(ans+(end-start)%mod*growth[no-1][j])%mod;
            ground[no-1][j]=0;
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(j==no-1)
                    continue;
                ground[i][j]+=(growth[i][j]*(end-start));
            }
        }
        for(int i=0;i<n;i++)
        {
            ans=(ans+(end-start)%mod*ground[i][no-1])%mod;
            ground[i][no-1]=0;
        }
    }
    return ans;
}
*/
int main()
{
    int n,m,k;
    cin>>n>>m>>k;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>growth[i][j];
            ground[i][j]=0;
        }
    }//initialize
    long long last=0;
    unsigned long long cnt=0;
    for(int i=0;i<k;i++)
    {
        char rc;
        int no;
        long long t;
        cin>>rc>>no>>t;
        grow(last,t,n,m);
        cnt=(cnt+mow(rc,no,n,m))%mod;
        last=t;
    }
    cout<<cnt;
    return 0;
}
