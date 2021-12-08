#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(string s1,string s2)
{
    string s3(s1,7);
    string s4(s2,7);
    return s3<s4;
}

int main()
{
    int n,cnt=0;
    cin>>n;
    string internet[n];
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        if(str[4]==':')
            internet[cnt++]=str;
    }
    sort(internet,internet+cnt,cmp);

    for(int i=0;i<cnt;i++)
        cout<<internet[i]<<endl;

    return 0;
}
