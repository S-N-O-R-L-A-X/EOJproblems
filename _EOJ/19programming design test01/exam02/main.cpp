#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


int main()
{
    int right[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char check[17]={'1','0','X','9','8','7','6','5','4','3','2'};
    int n;
    cin>>n;
    bool flag=true;
    string no[n];
    for(int i=0;i<n;i++)
        cin>>no[i];

    for(int i=0;i<n;i++)
    {
        if(no[i].find('X')!=no[i].npos&&no[i].find('X')<17)
        {
            cout<<no[i]<<endl;
            flag=false;
            continue;
        }
        long long sum=0;
        for(int j=0;j<17;j++)
            sum=sum+(no[i][j]-'0')*right[j];
        if(check[sum%11]!=no[i][17])
        {
            flag=false;
            cout<<no[i]<<endl;
        }
    }
    if(flag)
        cout<<"All passed"<<endl;
    return 0;
}
