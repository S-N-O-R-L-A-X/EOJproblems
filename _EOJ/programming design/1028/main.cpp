#include <iostream>
#include <cmath>
#include <algorithm>


#define EULER_e 2.7182818
using namespace std;

struct ratio
{
    double num;
    double rate;
};


bool cmp(ratio a,ratio b)
{
    return a.rate>b.rate;
}



int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        ratio statistics[n];
        double sum=0;
        for(int j=0;j<n;j++)
        {
            cin>>statistics[j].num;
            sum+=pow(EULER_e,statistics[j].num);
        }

        for(int j=0;j<n;j++)
            statistics[j].rate=pow(EULER_e,statistics[j].num)/sum;

        sort(statistics,statistics+n,cmp);
        printf("case #%d:\n",i);
        for(int j=0;j<n;j++)
        {
            if(statistics[j].rate>0.5/n)
                printf("%.2f\n",statistics[j].num);
        }

    }
    return 0;
}
