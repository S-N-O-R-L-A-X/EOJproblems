#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int m;
int origin[101];

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,j;
        cin>>n>>m;
        for(j=0;j<n;j++)
            cin>>origin[j];
        sort(origin,origin+n);

        int ans=0;
        bool flag=true;
        for(int i=0;i<n&&flag;i++)
        {
            for(int j=i+1;j<n&&flag;j++)
            {
                for(int k=j+1;k<n&&flag;k++)
                {
                    int tmp=origin[i]+origin[j]+origin[k];
                    if(tmp==m)
                        flag=false;
                    else if(tmp>m)
                        break;
                    else
                        ans=max(ans,tmp);
                }
            }
        }

        cout<<"case #"<<i<<':'<<endl;
        if(flag)
            cout<<ans<<endl;
        else
            cout<<m<<endl;
    }

    return 0;
}

/*
没看到选3个
void findmax(int now,int end,int tmp,int &ans)
{
    if(tmp>=m||now>=end)
    {
        if(tmp==m)
        {
            ans=m;
            return ;
        }
        ans=max(ans,tmp-origin[now-1]);
        return ;
    }
    for(int i=0;i<end;i++)
    {
        if(use[i])
        {
            use[i]=false;
            findmax(i+1,end,tmp+origin[i],ans);
            use[i]=true;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,j;
        cin>>n>>m;
        for(j=0;j<n;j++)
        {
            cin>>origin[j];
            use[j]=true;
        }

        sort(origin,origin+n);
        for(j=0;j<n;j++)
        {
            if(origin[j]>m)
                break;
        }
        int end=j-1;
        int ans=0;
        findmax(0,end,0,ans);
        cout<<"case #"<<i<<':'<<endl;
        cout<<ans<<endl;
    }

    return 0;
}
*/
