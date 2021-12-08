#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        //5->0,25->00,125->000,625->0000,because 2 is enough
        int s=n/5+n/25+n/125+n/625;
        cout<<"case #"<<i<<':'<<endl;
        cout<<s<<endl;
    }
    return 0;
}
