#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int flag=-1;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>=2&&arr[i]<=4&&flag==-1)
                flag=i;
        }
        if(flag==-1)
            cout<<"Deep Dark Fantasy of ECNU"<<endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                if(flag==i)
                    cout<<"1 1 ";
                else
                    cout<<arr[i]<<' ';
            }
            cout<<endl;
        }

    }

    return 0;
}
