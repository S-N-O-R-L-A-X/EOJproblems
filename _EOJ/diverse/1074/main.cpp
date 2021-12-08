#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /*
    n^n=s
    nlgn=lgs=x=a.b
    s=10^(a.b)=10^a*10^0.b
    10^a is an integer and its first place is always 1,which will not
    influence the judgement
    so we just need to know the first effective place of 10^0.b
    b=x-a=>b=x-(int)x
    */
    int n;
    while(cin>>n&&n!=0)
    {
        double x=1.0*n*log10(n);
        double b=x-(int)x;//solve b
        b=pow(10,b);//solve 10^0.b
        while(b<1)
            b*=10;//get the first effective place of 10^0.b
        int ans=(int) b;
        cout<<ans<<endl;
    }

    return 0;
}
