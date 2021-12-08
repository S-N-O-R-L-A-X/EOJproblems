#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int lengtha,lengthb;
        cin>>lengtha>>lengthb;
        string stra,strb;
        cin>>stra>>strb;
        if(lengtha<lengthb)
        {
            cout<<"NO"<<endl;
            continue;
        }
        string s=stra+stra;//turn curve into straight
        if(s.find(strb)==s.npos)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
