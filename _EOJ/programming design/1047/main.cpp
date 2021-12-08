#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct DNA
{
    string str;
    int cnt;
    DNA()
    {
        str="NULL";
        cnt=1;
    }
    DNA(string s)
    {
        str=s;
        cnt=1;
    }
};

vector<*DNA> q;


void add(string d)
{
    for(int i=0;i<q.size();i++)
    {
        if(q[i].str==d)
        {
            q[i].cnt++;
            return ;
        }
    }
    DNA x(d);
    q.push_back(x);
}

bool cmp(DNA x,DNA y)
{
    if(x.cnt!=y.cnt)
        return x.cnt<y.cnt;
    return x.str<y.str;
}

int main()
{
    int n;
    cin>>n;

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        add(x);
    }

    sort(q.begin(),q.end(),cmp);
    for(int i=0;i<q.size();i++)
        cout<<q[i].str<<endl;
    return 0;
}
