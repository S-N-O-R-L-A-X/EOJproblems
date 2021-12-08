#include <iostream>
using namespace std;
void initialize(int arr[],int len);

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        int quotient[m],remainder[m];
        initialize(quotient,m);
        initialize(remainder,m);
        cout<<"case #"<<i<<':'<<endl;
        for(int j=0;j<m;j++)
        {
            remainder[n]=j;//record the dividend in loop j
            n*=10;
            quotient[j]=n/m;
            n%=m;

            if(n==0)
            {
                cout<<"0.";
                for(int k=0;k<=j;k++)
                    cout<<quotient[k];
                cout<<endl;
                break;
            }//if not a circulating number

            if(remainder[n]!=-1)
            {
                cout<<"0.";
                for(int k=0;k<=j;k++)
                    cout<<quotient[k];
                cout<<endl;
                cout<<(remainder[n]+1)<<'-'<<(j+1)<<endl;//j starts from 0
                break;
            }
        }
    }
    return 0;
}

void initialize(int arr[],int len)
{
    for(int i=0;i<len;i++)
        arr[i]=-1;
}
