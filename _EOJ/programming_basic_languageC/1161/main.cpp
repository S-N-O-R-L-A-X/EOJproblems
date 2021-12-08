#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int fact[9]={1};
    for(int i=1;i<9;i++)
        fact[i]=fact[i-1]*(i+1);

    for(int i=0;i<t;i++)
    {
        int n,pos=8,ans_pos=0;
        cin>>n;
        int ans[9]={-1,-1,-1,-1,-1,-1,-1,-1,-1};//max length =9
        printf("case #%d:\n",i);
        if(n==0)
        {
            cout<<'0'<<endl;
            continue;
        }
        while(n)
        {
            if(n>=fact[pos])
            {
                ans[ans_pos]=n/fact[pos];
                n%=fact[pos];
                if(n==0)//deal with fact[pos] divides n
                {
                    for(int j=ans_pos+1;j<9;j++)
                        ans[j]=0;
                }

            }
            else
                ans[ans_pos]=0;
            ans_pos++;
            pos--;
        }

        bool flag=false;//means whether have printed numbers

        for(int j=0;j<9;j++)
        {
            if(ans[j]==-1)
                break;
            else if(ans[j]!=0||flag)
            {
                cout<<ans[j];
                flag=true;
            }
        }
        cout<<endl;
    }

    return 0;
}
