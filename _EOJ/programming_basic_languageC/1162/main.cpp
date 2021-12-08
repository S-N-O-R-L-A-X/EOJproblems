#include <iostream>

using namespace std;

long long GCD(long long a,long long b)
{
    if(b==0)
        return a;
    return GCD(b,a%b);
}

long long LCM(long long a,long long b)
{
    return a/GCD(a,b)*b;
}

int main()
{
    int x,n;
    cin>>x>>n;

    for(int i=2;i<=n;i++)
    {
        cout<<LCM(x,i)/x<<endl;
    }
    return 0;
}
