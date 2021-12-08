#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+1];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(int i=0;i<m;i++)
    {
        int choice;
        cin>>choice;
        if(choice==1)
        {
            int l,r,k,tmp;
            cin>>l>>r>>k;
            for(int i=l;i<=r;i++)
            {
                if((i-l)%k==0)
                {
                    tmp=arr[i];
                    arr[i]=arr[i+1];
                }
                else if((i-l+1)%k==0)
                    arr[i]=tmp;
                else
                    arr[i]=arr[i+1];
            }
        }
        else
        {
            int l,r;
            cin>>l>>r;
            long long sum=0;
            for(int i=l;i<=r;i++)
                sum+=arr[i];
            cout<<sum<<endl;
        }

    }
    return 0;
}
