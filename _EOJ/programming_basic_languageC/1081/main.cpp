#include <iostream>

using namespace std;
/*
solve n can divide at least how many consecutive 1s
*/
int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int cnt=1;
        long long s=1;

        while(s%n)
        {
            s%=n;
            s=s*10+1;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
