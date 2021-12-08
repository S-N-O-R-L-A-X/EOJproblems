#include <iostream>
#include <stdio.h>
#define M 1000
#define N 10007
using namespace std;
long long dp[M][M]={1};
/*
long long combination(int n,int m)
{

    //Cnm=n!/(m!*(n-m)!)

    long long ans=1;
    if(n==0)
        return 0;
    if(n==m||m==0)
        return 1;
    int cnt=2;
    if(m>n-m)
    {
        for(int i=n;i>=m+1;i--)
        {
            ans*=i;
            while(cnt<=n-m&&ans%cnt==0)
            {
                ans/=cnt;
                cnt++;
            }
        }

    }
    else
    {
        for(int i=n;i>=n-m+1;i--)
        {
            ans*=i;
            while(cnt<=m&&ans%cnt==0)
            {
                ans/=cnt;
                cnt++;
            }
        }
    }
    return ans%10007;
}

long long ipow(int a,int n)
{
    long long ans=1;
    for(int i=1;i<=n;i++)
        ans=ans*a%10007;
    return ans;
}

void solve()
{
    //ans=Cki*a^i*b^(k-i);  i=n;  k-i=m;
    int a,b,k,n,m;
    cin>>a>>b>>k>>n>>m;
    int x=combination(k,n)*ipow(a,n)%10007*ipow(b,m)%10007;
    cout<<x<<endl;
}*/

int f(int n,int m,int a,int b)
{

   int i,j;
   for(i=0;i<=n;i++)
   {
       for(j=0;j<=m;j++)
       {
           if(i+j)
           {
               if(i==0)
                   dp[i][j]=b*dp[i][j-1]%N;
               else if(j==0)
                   dp[i][j]=a*dp[i-1][j]%N;
               else
                   dp[i][j]=(a*dp[i-1][j]+b*dp[i][j-1])%N;
           }
       }
   }
   return dp[n][m];
}

void solve()
{
    int a,b,k,n,m;
    cin>>a>>b>>k>>n>>m;
    int x=f(n,m,a,b);
    cout<<x<<endl;
}
/*
d(n,m)*x^n*y^m
d(n,m)=a*d(n-1,m)+b*d(n,m-1)


1       b       b^2   ...   b^n
a
a^2
a^3
.
.
.
a^n
*/

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        printf("case #%d:\n",i);
        solve();
    }
    return 0;
}
