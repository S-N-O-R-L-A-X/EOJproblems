#include <iostream>

using namespace std;

struct web
{
    string net;
    int v;
};

int main()
{
    int n;
    cin>>n;
    web arr[n];
    int maxv=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].net>>arr[i].v;
        if(arr[i].v>maxv)
            maxv=arr[i].v;
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i].v==maxv)
            cout<<arr[i].net<<endl;
    }

    return 0;
}
