#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<string> email;

bool cmp(string s1,string s2)
{
    int pos1=s1.find('@');
    int pos2=s2.find('@');
    string domain1(s1,pos1);
    string domain2(s2,pos2);
    if(domain1!=domain2)
        return domain1<domain2;
    string user1(s1,0,pos1);
    string user2(s2,0,pos2);
    return user1>user2;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        email.push_back(a);
    }

    sort(email.begin(),email.end(),cmp);
    for(int i=0;i<email.size();i++)
        cout<<email[i]<<endl;
    return 0;
}
