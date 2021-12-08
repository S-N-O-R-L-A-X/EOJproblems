#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a,int b)
{
    return a>b;
}

int main()
{
    int t,n,m;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        int height[n];
        int backup[n];
        for(int j=0;j<n;j++)
        {
            cin>>height[j];
            backup[j]=height[j];
        }

        sort(backup,backup+n,cmp);
        for(int j=0;j<m;j++)
        {
            int r;
            cin>>r;
            int index=backup[r-1];
            for(int k=0;k<n;k++)
            {
                if(height[k]==index)
                {
                    cout<<k+1<<' ';
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
