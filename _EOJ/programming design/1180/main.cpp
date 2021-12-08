#include <iostream>
#include <cmath>
using namespace std;

void dfs(int pre,int sum,int n,int m,int &cnt)
{
    if(sum>n)
        return ;
    if(sum==n)
    {
        cnt++;
        return ;
    }
    for(int i=pre+1;i<=m;i++)
        dfs(i,sum+i,n,m,cnt);
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        int cnt=0;
        dfs(0,0,n,m,cnt);
        cout<<"case #"<<i<<':'<<endl;
        cout<<cnt<<endl;
    }
    return 0;
}
