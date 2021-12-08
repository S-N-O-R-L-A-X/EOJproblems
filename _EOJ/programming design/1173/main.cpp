#include <iostream>

using namespace std;

/*
reference:
f(n):when n is odd,it only has one more 1 than f(n-1) so f(n)=f(n-1)
    when n is even,it will have a similar part with f(n/2) but the number
    will be doubled,and the rest part only has 2 more useless 1s than f(n-2).
    So f(n)=f(n/2)+f(n-2).Since n is even,f(n)=f(n/2)+f(n-1).
*/

int main()
{
    int t;
    cin>>t;
    int dp[1000001]={1,1};
    for(int i=2;i<1000001;i++)
    {
        if(i%2==1)
            dp[i]=dp[i-1];
        else
            dp[i]=(dp[i/2]+dp[i-2])%1000000000;
    }
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        cout<<"case #"<<i<<':'<<endl;
        cout<<dp[n]<<endl;
    }
    return 0;
}
