#include <iostream>
#include <cmath>
using namespace std;

/*
reference:
from determinant:
S=|1/2 |x1,y1,1||
  |    |x2,y2,1||
  |    |x3,y3,1||
let x3=y3=0
s=0.5*|x1*y2-x2*y1|


when you solve the area of a polygon,
s=sigma(0.5*(xi*yi+1-xi+1*yi))(when i+1>n,just let i+1=0)

*/

double S(double x1,double y1,double x2,double y2)
{
    return 0.5*(x1*y2-y1*x2);
}

int main()
{
    while(true)
    {
        int k;
        cin>>k;
        double s=0;
        if(k==0)
            break;

        double x,y,x1,y1,x2=0,y2=0;
        cin>>x>>y;
        x1=x;
        y1=y;

        for(int i=1;i<k;i++)
        {
            cin>>x2>>y2;
            s=s+S(x1,y1,x2,y2);
            x1=x2;
            y1=y2;
        }
        s=s+S(x1,y1,x,y);
        s=fabs(s);
        int ans=round(s);
        cout<<ans<<endl;
    }

    return 0;
}
