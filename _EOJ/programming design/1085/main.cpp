#include <iostream>

using namespace std;

int JosephRing(int n,int m)
{
    bool people[n]={false};//false shows living
    int i=0,cnt=0;
    int life=n;
    while(life>1)
    {
        if(!people[i])
            cnt++;
        if(cnt==m)
        {
            life--;
            people[i]=true;
            cnt=0;
        }
        i=(i+1)%n;
    }

    for(int i=0;i<n;i++)
    {
        if(!people[i])
            return i+1;//starting from 0
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        cout<<"case #"<<i<<':'<<endl<<JosephRing(n,m)<<endl;
    }
    return 0;
}
