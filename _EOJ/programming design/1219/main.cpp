#include <iostream>

using namespace std;

int BigInt_Multiply(int b[],int a,int len)//the ans is inverse
{
    int last=len;
    int cf=0;//carry flag
    for(int i=0;i<=len;i++)
    {
        b[i]=b[i]*a+cf;
        if(b[i]>=10)
        {
            cf=b[i]/10;
            b[i]%=10;
            if(i==len)
            {
                last++;
                b[i+1]=cf;
            }
        }
        else
            cf=0;
    }
    return last;//
}

int BigInt_Pow(int a,int n,int ans[])
{
    int last=0;
    for(int i=1;i<=n;i++)
        last=BigInt_Multiply(ans,a,last);
    return last;
}



int main()
{

    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int a,n;
        cin>>a>>n;
        int ans[100]={1};
        int end=BigInt_Pow(a,n,ans);
        cout<<"case #"<<i<<':'<<endl;
        for(int j=end;j>=0;j--)
            cout<<ans[j];
        cout<<endl;
    }
    return 0;
}
