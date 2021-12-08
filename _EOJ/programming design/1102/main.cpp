#include <iostream>

using namespace std;

int GCD(int a,int b)
{
    if(b==0)
        return a;
    return GCD(b,a%b);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    /*
    reference:ans=Cn3-no matching
    */
    int dp[600][600]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            dp[i][j]=GCD(arr[i],arr[j]);
            dp[j][i]=GCD(arr[i],arr[j]);
        }
    }
    /*this will create a matrix whose diagonal line is undefined and
    dp[i][j] means that arr[i] and arr[j] are relatively prime or not,
    so sum should be calculated line by line because each line has the same
    element.
    */
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int x=0,y=0;//x counts relatively prime,y counts not relatively prime
        for(int j=0;j<n;j++)
        {
            if(i!=j)//the diagonal line is undefined
            {
                if(dp[i][j]==1)
                    x++;
                else
                    y++;
            }
        }
        sum+=x*y;//
    }
    long long ans=(long long)n*(n-1)*(n-2)/6-sum/2;
    cout<<ans<<endl;
    return 0;
}




/*
bool check[100];
bool RelativelyPrimeOrInverse(int temp[])
{
    if(temp[0]%temp[1]==0||temp[1]%temp[0]==0)
    {
        if((temp[0]%temp[2]==0||temp[2]%temp[0]==0)&&(temp[1]%temp[2]==0||temp[2]%temp[1]==0))
            return true;
    }
    else
    {
        if((temp[0]%temp[2]!=0&&temp[2]%temp[0]!=0)&&(temp[1]%temp[2]!=0&&temp[2]%temp[1]!=0))
            return true;
    }
    return false;
}


void COUNT(int arr[],int n,int &i,int temp[],int k,int &cnt)//i represents the start num
{
    if(k==3)
    {
        if(RelativelyPrimeOrInverse(temp))
            cnt++;
        return ;
    }
    else
    {
        for(int j=i;j<n;j++)
        {
            if(check[j])
            {
                temp[k]=arr[j];
                check[j]=false;
                COUNT(arr,n,i,temp,k+1,cnt);
                check[j]=true;
            }
        }
        if(k==0)//start should move
            i++;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        check[i]=true;
    int cnt=0;
    int i=0;
    int temp[3];
    COUNT(arr,n,i,temp,0,cnt);
    cout<<cnt;
    return 0;
}*/
