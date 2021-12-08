#include <iostream>

using namespace std;

int main()
{
    int m,n,h;
    cin>>m>>n>>h;
    int maze[m][n];
    int dp[m][n]={0};
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>maze[i][j];
        }
    }

    dp[0][0]=h+maze[0][0];
    if(dp[0][0]<0)
        dp[0][0]=-9999999;
    for(int i=1;i<m;i++)
    {
        dp[i][0]=dp[i-1][0]+maze[i][0];
        if(dp[i][0]<0)
            dp[i][0]=-9999999;
    }

    for(int j=1;j<n;j++)
    {
        dp[0][j]=dp[0][j-1]+maze[0][j];
        if(dp[0][j]<0)
            dp[0][j]=-9999999;
    }

    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(dp[i-1][j]<0&&dp[i][j-1]<0)
                dp[i][j]=-9999999;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1])+maze[i][j];
        }
    }
    if(dp[m-1][n-1]<0)
        cout<<-1;
    else
        cout<<dp[m-1][n-1];


    return 0;
}
