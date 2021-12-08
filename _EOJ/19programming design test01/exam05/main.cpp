#include <iostream>
#include <algorithm>
using namespace std;

struct business
{
    int t;
    int d;
    int w;
};

struct ans
{
    int sum_of_wealth;
    int sum_of_ability;
};

void dp(ans arr[],business brigade[],int index,int ability)
{
    bool flag=true;
    for(int i=0;i<index;i++)
    {
        if(ability>=brigade[index].d+arr[i].sum_of_ability)
        {
            if(brigade[index].w+arr[i].sum_of_wealth>arr[index].sum_of_wealth)
            {
                arr[index].sum_of_ability=brigade[index].d+arr[i].sum_of_ability;
                arr[index].sum_of_wealth=brigade[index].w+arr[i].sum_of_wealth;
                flag=false;
            }
        }
    }
    if(flag)
    {
        arr[index].sum_of_ability=arr[index-1].sum_of_ability;
        arr[index].sum_of_wealth=arr[index-1].sum_of_wealth;
    }

}

int main()
{
    int n;
    cin>>n;
    business brigade[n];
    for(int i=0;i<n;i++)
        cin>>brigade[i].t>>brigade[i].d>>brigade[i].w;
    ans arr[n]={0,0,0};
    int j=0;
    int time=0;
    while(j<n)
    {
        time++;
        if(time==brigade[j].t)
        {
            dp(arr,brigade,j,time);
            j++;
        }
    }
    cout<<arr[n-1].sum_of_wealth;
}











/*
struct teams
{
    int t_i;
    int d_i;
    int w_i;
    double right;
};

bool cmp(teams a,teams b)
{
    if(a.right!=b.right)
        return a.right>b.right?true:false;
    return a.w_i>b.w_i;
}

double aver(teams a[],int first,int last)
{
    double s=0;
    if(first==last)
        return 0;
    for(int i=first;i<last;i++)
        s+=a[i].right;
    return s/(last-first);
}

int main()
{
    int n,j;
    cin>>n;
    teams origin[n],team[n];
    double s;
    bool flag=true;
    for(j=0;j<n;j++)
    {
        cin>>origin[j].t_i>>origin[j].d_i>>origin[j].w_i;
        origin[j].right=1.0*origin[j].w_i/origin[j].d_i;
    }
    int w1=0,w2=0,w3=0,w4=0,w7=0;
    int ability=0;
    int k=0;
    for(j=0;j<n;j++)
    {
        if(origin[j].d_i<=origin[j].t_i)
            team[k++]=origin[j];
    }
    n=k;
    if(k==0)
        flag=false;
    j=0;
    for(int i=1;i<=team[n-1].t_i;i++)
    {
        ability++;
        if(i==team[j].t_i)
        {
            if(ability>=team[j].d_i)
            {
                w1+=team[j].w_i;
                ability-=team[j].d_i;
            }
            j++;
        }
    }
    ability=0;j=0;
    for(int i=1;i<=team[n-1].t_i;i++)
    {
        ability++;
        if(i==team[j].t_i)
        {
            double a=aver(team,j+1,n);
            if(ability>=team[j].d_i&&team[j].right>a)
            {
                w2+=team[j].w_i;
                ability-=team[j].d_i;
            }
            j++;
        }
    }

    ability=0;
    sort(team,team+n,cmp);
    int maxt=0;
    for(int i=0;i<n;i++)
    {
        if(team[i].t_i>maxt)
            maxt=team[i].t_i;
    }
    for(int i=0;i<n;i++)
    {
        if(team[i].d_i+ability<=maxt)
        {
            w4+=team[i].w_i;
            ability+=team[i].d_i;
        }
    }


    int w5=max(w1,w2);
    int w6=max(w3,w4);
    int w=max(w5,w6);
    if(flag)
        cout<<w<<endl;
    else
        cout<<'0'<<endl;
    return 0;
}
*/
