#include <iostream>

using namespace std;

int main()
{
    int t,num=149999;
    cin>>t;
    int visit[150000]={0};
    for(int step=1;num>step;step++)
    {
        int cnt=0;
        for(int i=1;i<150000;i++)
        {
            if(visit[i]==0)
            {
                if(step==cnt)
                {
                    visit[i]=-1;
                    num--;
                    cnt=0;
                }
                else
                    cnt++;
            }
        }
    }
    int cnt=1;
    for(int i=1;i<150000;i++)
    {
        if(visit[i]!=-1)
            visit[i]=cnt++;
    }


    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        if(visit[n]==-1)
            printf("case #%d:\nNo\n",i);
        else
            printf("case #%d:\nYes %d\n",i,visit[n]);
    }
    return 0;
}
