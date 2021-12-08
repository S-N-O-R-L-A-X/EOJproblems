#include <iostream>

using namespace std;

/*
reference:
a+b=y;1
a+c=x;2
a+2b+c=z;3
2,3=>b=(z-x)/2
=>a=y-(z-x)/2
*/

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    double ans=y-(double)(z-x)/2;
    if(ans<1E-7||(x-ans<1E-7)||(y-ans<1E-7)||(z-ans<1E-7))
        printf("Wrong");
    else
        printf("%.2f",ans);

    return 0;
}
