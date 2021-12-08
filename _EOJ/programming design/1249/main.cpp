#include <iostream>

using namespace std;

void insert(int arr[],int len,int p)
{
    int i;
    for(i=0;i<len;i++)
    {
        if(arr[i]>=p)
            break;
    }
    for(int j=len;j>=i;j--)
        arr[j+1]=arr[j];
    arr[i]=p;
}

void remove(int arr[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        arr[i]=arr[i+1];
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        int idx=0;
        cout<<"case #"<<i<<':'<<endl;
        for(int j=0;j<n;j++)
        {
            char act;
            int p;
            cin>>act;
            if(act=='B')
            {
                cin>>p;
                insert(arr,idx++,p);
            }
            else
            {
                cout<<arr[0]<<endl;
                remove(arr,idx--);
            }
        }

    }
    return 0;
}
