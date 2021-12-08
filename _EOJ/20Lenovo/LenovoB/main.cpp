#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double ans=17713678436481;
    for(int i=0;i<n;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        double len=sqrt((double)x*x+y*y+z*z);
        if(len<ans)
            ans=len;
    }
    printf("%.3f",ans);
    return 0;
}
