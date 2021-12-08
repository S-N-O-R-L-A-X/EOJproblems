#include <iostream>

using namespace std;

int main()
{
    int n;//the top two number
    //int a00[21]={0,0,1},a01[21]={0,0,1},a10[21]={0,0,1},a11[21]={0,0,1};
    int a00[21]={0,0,1},a01[21]={0,0,1},a1[21]={0,1,2};
    int ans[21]={0,2,4};
    for(int i=3;i<=20;i++)
    {
        /*ans[i]=2*a00[i-1]+a01[i-1]+2*a10[i-1]+2*a11[i-1];
            a00[i]=a00[i-1]+a01[i-1];
            a01[i]=a11[i-1]+a10[i-1];
            a11[i]=a11[i-1]+a10[i-1];
            a10[i]=a00[i-1]+a01[i-1];*/
        a00[i]=a00[i-1]+a01[i-1];
        a01[i]=a1[i-1];
        a1[i]=a00[i-1]+a1[i-1];
        ans[i]=a1[i]+a00[i]+a01[i];
    }

    while(cin>>n&&n!=-1)
        cout<<ans[n]<<endl;
    return 0;
}

/*
the string which contains 101 no matter what it pluses before,
it shouldn't be counted

101comes from 1+01
01comes from  0+1
1
*/
