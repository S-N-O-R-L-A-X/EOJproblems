#include <iostream>
#include <stdio.h>

using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int w,m,c;
    bool flag=true;
    for(m=0;3*m<=k;m++)
    {
        w=k-n-2*m;
        c=2*n+m-k;
        if(c>=0&&w>=0)
        {
            printf("%d %d %d\n",m,w,c);
            flag=false;
        }
    }
    if(flag)
        printf("-1\n");
}


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        printf("case #%d:\n",i);
        solve();
    }
    return 0;
}
