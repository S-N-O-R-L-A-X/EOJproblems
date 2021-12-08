#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    string tmp;
    for(int i=0;i<a;i++)
        cin>>tmp;
    int b;
    cin>>b;
    for(int i=0;i<b;i++)
        cin>>tmp;
    if(a>b)
        cout<<"Cuber QQ";
    else
        cout<<"Quber CC";
    return 0;
}
