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
        int h=0,m=0,tmph,tmpm;
        double s=0,tmps;
        for(int j=0;j<n;j++)
        {
            scanf(" %d:%d:%lf",&tmph,&tmpm,&tmps);
            h+=tmph;
            m+=tmpm;
            s+=tmps;
        }
        int t=(int)s/60;
        s-=t;
        m+=t;
        h=h+m/60;
        m%=60;
        h%=24;
        printf("case #%d:\n",i);
        if(h<4||h>=22)
            cout<<"Good night!"<<endl;
        else if(h>=4&&h<12)
            cout<<"Good morning!"<<endl;
        else if(h>=12&&h<18)
            cout<<"Good afternoon!"<<endl;
        else
            cout<<"Good evening!"<<endl;
    }
    return 0;
}
