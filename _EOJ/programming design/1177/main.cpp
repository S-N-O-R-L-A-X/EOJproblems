#include <iostream>

using namespace std;

/*
111 comes from 11,11 comes from 1.
*/

/*e.g  m=4
        assume that A means set that doesn't contain 1111
        int a111[n];
        int a110[n];
        int a10[n];
        int a0[n];
        A[k]=a0[k]+a10[k]+a110[k]+a111[k]

        a111[k]=a11[k-1]
        a11[k]=a1[k-1]
        a1[k]=a0[k-1]
        a0[k]=a111[k-1]+a11[k-1]+a1[k-1]+a0[k-1]

        a[4][n]:
        a[0][i]=a[1][i-1]
        a[1][i]=a[2][i-1]
        a[2][i]=a[3][i-1]
        a[3][i]=a[0][i-1]+a[1][i-1]+a[2][i-1]+a[3][i-1]
        A[]
        */

long long pow2(int x)
{
    long long out=1;
    for(int i=1;i<=x;i++)
        out<<=1;
    return out;
}

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if(n==-1&&m==-1)
            break;
        int a[m][n]={0};
        for(int j=0;j<n;j++)
        {
            for(int i=0;i<m;i++)
                a[i][j]=0;
        }
        a[m-1][0]=1;
        a[m-2][0]=1;
        for(int j=1;j<n;j++)//control column
        {
            for(int i=0;i<m-1;i++)//control row
            {
                a[i][j]=a[i+1][j-1];
                a[m-1][j]+=a[i][j-1];
            }
            a[m-1][j]+=a[m-1][j-1];
        }
        int sum=0;
        for(int i=0;i<m;i++)
            sum+=a[i][n-1];
        long long solve=pow2(n)-sum;
        cout<<solve<<endl;
    }
    return 0;
}
