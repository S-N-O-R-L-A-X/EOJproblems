#include <iostream>

using namespace std;

int main()
{
    int n,s;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>s;
    bool flag=true;
    int cnt=0;
    for(int j=1;j<=n&&flag;j++)//control length
    {
        for(int k=0;k<=n-j&&flag;k++)//control start
        {
            int sum=0;
            for(int l=k;l<k+j;l++)//
                sum+=arr[l];
            if(sum>=s)
            {
                cnt=j;
                flag=false;
                break;
            }

        }
    }
    if(flag)
        cout<<'0'<<endl;
    else
        cout<<cnt<<endl;
    return 0;
}
