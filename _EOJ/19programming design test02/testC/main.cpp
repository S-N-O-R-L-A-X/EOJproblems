#include <iostream>
#include <algorithm>
using namespace std;

struct price
{
    int a;//pitaya pay
    int b;//cash
    int delta;//if delta>0,use pitaya pay
};

bool cmp(price x,price y)
{
    return x.delta>y.delta;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        price goods[n];
        for(int j=0;j<n;j++)
        {
            cin>>goods[j].a>>goods[j].b;
            goods[j].delta=goods[j].b-goods[j].a;
        }

        sort(goods,goods+n,cmp);
        long long sum=0,start=min(k,n);
        for(int j=0;j<min(k,n);j++)
        {
            if(goods[j].delta>0)
                sum+=goods[j].a;
            else
            {
                start=j;
                break;
            }
        }

        for(int j=start;j<n;j++)
            sum+=goods[j].b;
        cout<<sum<<endl;
    }
    return 0;
}

/*
test:

10 5
1 3
2 5
3 7
4 9
5 11
6 13
7 15
8 17
9 19
10 21

10 5
21 10
17 8
13 6
5  2
3 1
9 4
7 3
19 9
11 5
15 7

5 3
2 4
4 6
6 8
10 12
20 22
*/
