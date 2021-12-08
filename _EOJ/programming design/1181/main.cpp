#include <iostream>
#include <string>
using namespace std;
/*
reference:
like 2958,count the min word before the character k from the head character
to the last.
*/
void DP_func(int dp[],int pos,string origin,string word[],int n)
{
    int cnt=0,ans=999;
    for(int i=0;i<=pos;i++)
    {
        string tmp(origin,i,pos-i+1);
        for(int j=0;j<n;j++)
        {
            if(tmp.compare(word[j])==0)
            {
                if(i!=0&&dp[i-1]==0)
                    continue;
                if(i==0)//if a word starts from head,it must be 1 and smallest
                {
                    dp[pos]=1;
                    return ;
                }
                cnt=dp[i-1]+1;
                if(dp[pos]==0)
                    dp[pos]=cnt;
                else
                    dp[pos]=min(dp[pos],cnt);
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string origin;
        cin>>origin;
        int len=origin.size();
        int dp[len]={0};
        int n;
        cin>>n;
        string word[n];
        for(int j=0;j<n;j++)
            cin>>word[j];
        for(int j=0;j<len;j++)
            DP_func(dp,j,origin,word,n);

        cout<<dp[len-1]<<endl;
    }
    return 0;
}
