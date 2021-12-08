#include <iostream>
#include <string>
using namespace std;

int pow3(int x)
{
    int ans=1;
    if(x==0)
        return 1;
    for(int i=1;i<=x;i++)
        ans*=3;
    return ans;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string str;
        cin>>str;
        int s=0;
        int len=str.size();
        for(int j=0;j<len;j++)
        {
            int num;
            if(str[j]=='1')
                num=1;
            else if(str[j]=='0')
                num=0;
            else
                num=-1;
            s=s+num*pow3(len-1-j);
        }
        cout<<"case #"<<i<<':'<<endl;
        cout<<s<<endl;
    }
    return 0;
}
