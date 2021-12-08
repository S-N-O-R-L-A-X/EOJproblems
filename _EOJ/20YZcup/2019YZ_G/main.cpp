#include <iostream>
#include <cmath>
using namespace std;

int GCD(int a,int b)
{
    if(b==0)
        return a;
    return (b,a%b);
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        double ag,dg,ac,dc,n,m,a,b;
        cin>>ag>>dg>>ac>>dc>>n>>m>>a>>b;
        double deltaa,deltab;
        if(ag+m/a<=dc)//cannot win
        {
            cout<<"-1"<<endl;
            continue;
        }
        if((ag+m/a>dc+n)||(ac<dg+m/b))//attack once or strong defence
        {
            cout<<"0/1"<<endl;
            continue;
        }
        double maxattack=ag+m/a;
        int round=ceil(n/(maxattack-dc));
        double realattack=n/round+dc;
        double realdefence=dg+(m-a*(realattack-ag))/b;
        double damage=(ac-realdefence)*round;
        cout<<damage<<endl;
    }
    return 0;
}
