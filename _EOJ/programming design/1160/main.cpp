#include <iostream>
#include <algorithm>
using namespace std;

struct user
{
    string name;
    string num;
};

bool cmp(user a,user b)
{
    if(a.name!=b.name)
        return a.name<b.name;
    return a.num<b.num;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        user people[n];
        for(int j=0;j<n;j++)
            cin>>people[j].name>>people[j].num;
        string para;
        cin>>para;
        int cnt=0;
        user s[n];
        for(int j=0;j<n;j++)
        {
            if(people[j].num.find(para)!=people[j].num.npos)
                s[cnt++]=people[j];
        }
        sort(s,s+cnt,cmp);
        printf("case #%d:\n%d\n",i,cnt);
        for(int j=0;j<cnt;j++)
            cout<<s[j].name<<' '<<s[j].num<<endl;
    }
    return 0;
}
