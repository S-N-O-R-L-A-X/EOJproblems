#include <iostream>

using namespace std;

int main()
{
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int n;
        cin>>n;
        int shares[n],profit=0;
        for(int j=0;j<n;j++)
            cin>>shares[j];
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(shares[k]-shares[j]>profit)
                    profit=shares[k]-shares[j];
            }
        }
        cout<<profit<<endl;
    }
    return 0;
}
