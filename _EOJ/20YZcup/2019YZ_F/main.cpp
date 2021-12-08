#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int index(string a)
{
    int cnt=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='/')
            cnt++;
    }
    return cnt;
}

struct str
{
    string a;
    int slash;
};
/*
bool cmp(str a,str b)
{
    return a.slash<b.slash;
}
*/
int main()
{
    int n;
    cin>>n;
    str arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].a;
//        arr[i].slash=index(arr[i].a);
    }
//    sort(arr,arr+n,cmp);
//    int maxslash=arr[n-1].slash;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i].a.find(".eoj")!=arr[i].a.npos&&arr[i].a.find(".eoj")==arr[i].a.rfind(".eoj"))
            cnt++;
    }
    cout<<cnt;
    return 0;
}
