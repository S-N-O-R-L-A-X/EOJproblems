#include <iostream>

using namespace std;

struct dp
{
    int x;//records the last number in sum
    int sum;
};

int maxBeforeN(dp b[],int n,int comp)//n means the length of b at that time
{
    int MAX=0;
    for(int i=0;i<n;i++)
    {
        if(b[i].x<comp)
        {
            if(MAX<b[i].sum)
                MAX=b[i].sum;
        }
    }
    return MAX;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
            cin>>a[j];
        dp b[n];
        for(int j=0;j<n;j++)
        {
            b[j].sum=maxBeforeN(b,j,a[j])+a[j];
            b[j].x=a[j];
        }
        int ans=maxBeforeN(b,n,2147483647);
        cout<<"case #"<<i<<':'<<endl;
        cout<<ans<<endl;
    }
    return 0;
}
