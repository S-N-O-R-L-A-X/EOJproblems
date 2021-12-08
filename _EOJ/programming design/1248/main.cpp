#include <iostream>
#include <algorithm>
using namespace std;

bool index(int x,int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        if(x==arr[i])
            return true;
        if(x<arr[i])
            return false;
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int lena,lenb,lenc;
        cin>>lena>>lenb>>lenc;
        int a[lena],b[lenb],c[lenc];
        for(int j=0;j<lena;j++)
            cin>>a[j];
        for(int j=0;j<lenb;j++)
            cin>>b[j];
        for(int j=0;j<lenc;j++)
            cin>>c[j];
        sort(a,a+lena);
        sort(b,b+lenb);
        sort(c,c+lenc);
        cout<<"case #"<<i<<':'<<endl;
        bool flag=true;
        for(int j=0;j<lena;j++)
        {
            if(index(a[j],b,lenb)&&index(a[j],c,lenc))
            {
                flag=false;
                cout<<a[j]<<' ';
            }
        }
        if(flag)
            cout<<"-1";
        cout<<endl;
    }
    return 0;
}
