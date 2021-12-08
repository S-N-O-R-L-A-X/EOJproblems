#include <iostream>

using namespace std;

int main()
{
    double n,k,m;
    while(cin>>n>>k>>m)
    {
        double sum_money=n;
        double house=270;
        if(n>=house)
            cout<<1<<endl;
        bool flag=true;
        for(int i=2;i<=30;i++)
        {
            n=n*(m+100)/100;
            house=house*(k+100)/100;
            sum_money+=n;
            if(sum_money>=house)
            {
                cout<<i<<endl;
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"Impossible"<<endl;
    }
    return 0;
}
