#include <iostream>

using namespace std;

bool index(int arr[],int len,int x)
{
    for(int i=0;i<len;i++)
    {
        if(arr[i]==x)
            return true;
    }
    return false;
}

int GCD(int a,int b)
{
    if(b==0)
        return a;
    return GCD(b,a%b);
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,j,k;
        cin>>n;
        int origin[n];
        for(int j=0;j<n;j++)
            cin>>origin[j];
        int arr[n];
        k=0;
        for(j=0;j<n;j++)//delete repetition
        {
            if(!index(arr,k,origin[j]))
                arr[k++]=origin[j];
        }
        int len=k;
        int dp[len][len];

        for(j=0;j<len;j++)
        {
            for(k=j+1;k<len;k++)
                dp[j][k]=GCD(arr[j],arr[k]);
        }
        int cnt=0;
        for(j=0;j<len;j++)
        {
            for(k=j+1;k<len;k++)
            {
                if(dp[j][k]==1)
                    cnt++;
            }
        }

        cout<<"case #"<<i<<':'<<endl;
        cout<<cnt<<endl;
    }
    return 0;
}
