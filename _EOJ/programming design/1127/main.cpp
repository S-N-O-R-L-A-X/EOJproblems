#include <iostream>
#include <stdio.h>
using namespace std;

void solve()
{
    int p,e,i,d;
    cin>>p>>e>>i>>d;
    int cnt=0;
    for(int j=1;j<=100000;j++)
    {
        if((j-p+d)%23==0&&(j-e+d)%28==0&&(j-i+d)%33==0)
        {
            printf("the next triple peak occurs in %d days.\n",j);
            break;
        }
    }
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
