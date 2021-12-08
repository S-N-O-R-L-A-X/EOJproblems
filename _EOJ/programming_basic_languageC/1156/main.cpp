#include <iostream>

using namespace std;

int main()
{
    int n,i,k;
    cin>>n>>i>>k;
    int arr[n];
    for(int x=0;x<n;x++)
        arr[x]=x+1;
    int cnt=0,m=n;
    i=i-1;//the ring starts from 1
    while(n>0)
    {
        if(arr[i]!=-1)
        {
            cnt++;
            if(cnt==k)
            {
                cnt=0;
                cout<<arr[i]<<' ';
                arr[i]=-1;
                n--;//delete
            }
        }
        i=(i+1)%m;//move to next


    }
    return 0;
}
