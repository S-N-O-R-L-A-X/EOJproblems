#include <iostream>
#define maxsize 1001
using namespace std;

struct room
{
    int num;
    int money;
};

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        room arr[maxsize]={0,0};
        for(int j=0;j<n;j++)
        {
            int no;
            cin>>no;
            arr[no].num++;
            arr[no].money=arr[no].num*no;
        }
        int dp[maxsize]={0};
        dp[0]=arr[0].money;
        dp[1]=max(arr[1].money,dp[0]);
        bool flag=true;
        for(int j=2;j<maxsize;j++)
        {
            dp[j]=max(dp[j-2]+arr[j].money,dp[j-1]);
        }
        cout<<dp[maxsize-1]<<endl;

    }
    return 0;
}
