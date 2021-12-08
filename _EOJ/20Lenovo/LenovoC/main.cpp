#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(string a,string b)
{
    if(a.size()!=b.size())
        return a.size()<b.size();
    return a<b;
}

bool index(string keyword[],int m,string str)
{
    for(int i=0;i<m;i++)
    {
        if(keyword[i]==str)
            return true;
    }
    return false;
}

int main()
{
    int n,m,j=0;
    cin>>n>>m;
    string keyword[m];
    for(int i=0;i<m;i++)
    {
        string str;
        cin>>str;
        if(!index(keyword,j,str))
            keyword[j++]=str;
    }

    sort(keyword,keyword+j,cmp);
    int len=0,cnt=0;
    for(int i=0;i<j;i++)
    {
        if(len+keyword[i].size()<=n)
        {
            cnt++;
            len=len+keyword[i].size()+1;
        }
        else
            break;
    }
    cout<<cnt;
    return 0;
}
