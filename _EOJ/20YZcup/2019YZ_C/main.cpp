#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long k1, k2;
unsigned long long CoronavirusBeats()
{
    unsigned long long k3 = k1, k4 = k2;
    k1 = k4;
    k3 ^= k3 << 23;
    k2 = k3 ^ k4 ^ (k3 >> 17) ^ (k4 >> 26);
    return k2 + k4;
}

struct coordination
{
    unsigned long long x;
    unsigned long long y;
    unsigned long long z;
    int life;
    int order;
};

coordination arr[100001];

bool cmp1(const coordination &a,const coordination &b)
{
    if(a.life!=-1||b.life!=-1)
        return a.life<b.life;
    if(a.x!=b.x)
        return a.x>b.x;
    if(a.y!=b.y)
        return a.y>b.y;
    return a.z>b.z;
}

bool cmp2(const coordination &a,const coordination &b)
{
    return a.order<b.order;
}

int main()
{
    int n,cnt=0;
    cin>>n>>k1>>k2;
    bool kill=true;
    for (int i = 0; i < n; ++i)
    {
        arr[i].life=-1;//-1 represents alive
        arr[i].x = CoronavirusBeats();
        arr[i].y = CoronavirusBeats();
        arr[i].z = CoronavirusBeats();
        arr[i].order=i;
    }//initialize

    sort(arr,arr+n,cmp1);
    int lives=n;
    while(lives)
    {
        int now=lives;
        for(int i=0;i<now;i++)//virus
        {
            if(arr[i].life==-1)
            {
                for(int j=i+1;j<now;j++)//find protected
                {
                    if((arr[j].life==cnt||arr[j].life==-1)&&arr[j].y<=arr[i].y&&arr[j].z<=arr[i].z)
                    {
                        kill=false;
                        break;
                    }
                }
                if(kill)
                {
                    arr[i].life=cnt;
                    lives--;
                }
                kill=true;
            }
        }
        sort(arr,arr+n,cmp1);
        cnt++;
    }
    sort(arr,arr+n,cmp2);
    cout<<cnt<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i].life<<' ';
    return 0;
}
