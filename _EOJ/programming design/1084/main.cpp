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
        int s=n/5;
        cout<<"case #"<<i<<':'<<endl;
        cout<<s<<endl;
    }
    return 0;
}
