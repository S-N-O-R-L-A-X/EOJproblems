#include <iostream>
#include <stdio.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    unsigned long long Tribonacci[74]={0,1,1};
    for(int i=3;i<74;i++)
        Tribonacci[i]=Tribonacci[i-1]+Tribonacci[i-2]+Tribonacci[i-3];
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        printf("case #%d:\n%llu\n",i,Tribonacci[n]);
    }
    return 0;
}
