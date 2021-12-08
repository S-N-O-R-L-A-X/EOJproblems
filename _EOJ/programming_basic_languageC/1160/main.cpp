#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[50]={0};
        int cnt=0;

        for(int j=2;j<=n-1;j++)
        {
            if(n%j==0)
                arr[cnt++]=j;
        }
        int sum=0;
        for(int j=0;j<cnt;j++)
            sum+=(arr[j]*arr[j]);
        printf("case #%d:\n%d\n",i,sum);

    }
    return 0;
}
