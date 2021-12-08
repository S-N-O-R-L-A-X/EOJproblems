#include <iostream>
#include <algorithm>
using namespace std;

struct thing
{
    int w;
    int p;
};

int bag[21][100001];

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        thing goods[n+1];
        for(int j=1;j<n+1;j++)
            cin>>goods[j].w>>goods[j].p;

        for(int j=0;j<n+1;j++)
        {
            for(int k=0;k<m+1;k++)
                bag[j][k]=0;
        }

        for(int j=1;j<n+1;j++)//goods
        {
            for(int k=1;k<m+1;k++)//when the capacity of bag=k,how much it can contain
            {
                if(goods[j].w>k)
                    bag[j][k]=bag[j-1][k];
                else//if former,put in;else not put in
                    bag[j][k]=max(bag[j-1][k-goods[j].w]+goods[j].p,bag[j-1][k]);
            }
        }
        cout<<bag[n][m]<<endl;
    }

    return 0;
}
