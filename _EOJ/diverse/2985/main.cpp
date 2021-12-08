#include <iostream>
#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793

using namespace std;
double solve();

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        double s=solve();
        printf("case #%d:\n",i);
        printf("%.6lf\n",s);
    }
    return 0;
}

double solve()
{
    double n,k;
    cin>>n>>k;
    double s=0;
    for(int i=1;i<=k;i++)
    {
        s+=n*n-PI*(n/2)*(n/2);
        n=n/sqrt(2);//n/2/sqrt(2)*2
    }
    return s;
}
