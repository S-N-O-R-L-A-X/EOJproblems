#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
/*
int index(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
            return i;
    }
    return n;
}*/

void solve()
{
    int n;
    cin>>n;
    int vec1[n],vec2[n];
    long long ans=0;
    for(int i=0;i<n;i++)
        cin>>vec1[i];
    for(int i=0;i<n;i++)
        cin>>vec2[i];
    sort(vec1,vec1+n);
    sort(vec2,vec2+n);
    int sep1=index(vec1,n);
    int sep2=index(vec2,n);
//    if(sep1==n&&sep2==n)
//    {
        for(int i=0;i<n;i++)
            ans+=vec1[i]*vec2[n-1-i];
//    }
    printf("%lld\n",ans);
}

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

