#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        int mana=n,last=0,now=last;
        for(int j=1;j<=m;j++)
        {
            if(mana>=x)
            {
                mana-=x;
                now=last+1;
            }
            else
                now=last;
            mana=min(mana+y,n);
            last=now;
        }
        cout<<now<<endl;
    }
    return 0;
}
