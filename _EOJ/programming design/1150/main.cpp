#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        bool flag=true;
        int idx=0;
        for(int i=0;i<a.size();i++)
        {
            string tmp(b,idx);
            if(tmp.find(a[i])==tmp.npos)
            {
                flag=false;
                break;
            }
            else
                idx+=tmp.find(a[i]);
            idx++;
        }
        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}

/*
test:
saab sasssssbbbbbbbba

*/
