#include <iostream>

using namespace std;

unsigned long long combination(int n,int m)
{
    //Cnm=n!/(m!*(n-m)!)
    unsigned long long ans=1;
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
    return ans;
}

unsigned long long combination2(int n,int m)
{
    //Cnm=n!/(m!*(n-m)!)
    unsigned long long p=1;
    int small,large;
    int i;

    if(n>2*m)//judge n-m>m or not
    {
        small=m;
        large=n-m;
    }
    else
    {
        small=n-m;
        large=m;
    }

    for(i=n;i>large;i--)
    {
        //in this way we can avoid multiplying a lot of even big numbers
        if(i==2*small)
        {
            p*=2;
            small--;
        }
        else
            p=p*i;
    }
    for(i=small;i>1;i--)//divide the rest
        p/=i;
    return p;
}

int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        unsigned long long ans=combination(n,m);
        unsigned long long ans2=combination2(n,m);
        cout<<"case #"<<i<<':'<<endl;
        cout<<ans<<endl<<ans2<<endl;
    }
    return 0;
}
