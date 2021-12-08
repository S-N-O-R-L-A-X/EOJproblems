#include <iostream>

using namespace std;

unsigned long long FindFLR(unsigned long long b[],int l,int r)
{
    unsigned long long ans=998244354;
    for(int i=l;i<=r;i++)
        ans=min(ans,b[i]);
    return ans;
}

unsigned long long BeautyValue(unsigned long long b[],int n)
{
    unsigned long long sum=0;
    for(int l=1;l<n;l++)
    {
        for(int r=l;r<n;r++)
        {
            unsigned long long flr=FindFLR(b,l,r);
            sum+=flr%998244353;
        }
    }
    return sum;
}




int main()
{

    int n,p,x,y,z;
    cin>>n;
    unsigned long long b[n+1]={0},a[n+1]={0};
    cin>>p>>x>>y>>z>>b[1];
    for(int i=2;i<=n;i++)
    {
        a[i-1]=BeautyValue(b,i);
        b[i]=((x*a[i-1]%p+y*b[i-1]%p)%p+z)%p;
    }
    a[n]=BeautyValue(b,n+1);
    unsigned long long ans=a[1];
    for(int i=2;i<=n;i++)
        ans=ans^a[i];
    cout<<ans;
    return 0;
}
