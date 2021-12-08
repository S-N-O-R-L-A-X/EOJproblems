#include <iostream>
#include <stdio.h>

using namespace std;

void compare(int arr[],int m)
{
    bool flag=true;
    int comp[m],ans;
    comp[0]=arr[0];
    comp[1]=arr[1];
    comp[2]=arr[2];
    for(int j=3;j<m;j++)
    {
        comp[j]=comp[j-1]+comp[j-2]+comp[j-3];
        if(comp[j]!=arr[j])
        {
            if(arr[j]!=-1)
                flag=false;
            else
                ans=comp[j];
        }
    }
    if(flag&&ans>=1&&ans<=1000000)
        cout<<ans<<endl;
    else
        cout<<"-1"<<endl;
}

void solve()
{
    int m,j,index;
    cin>>m;
    int arr[m];
    for(j=0;j<m;j++)
    {
        cin>>arr[j];
        if(arr[j]==-1)
            index=j;
    }

    if(index==0)
    {
        arr[0]=arr[3]-arr[2]-arr[1];
        if(arr[0]>=1&&arr[0]<=1000000)
            cout<<arr[0]<<endl;
        else
            cout<<"-1"<<endl;
    }
    else if(index==1)
    {
        arr[1]=arr[3]-arr[0]-arr[2];
        if((m==4||(arr[1]+arr[2]+arr[3]==arr[4]))&&arr[1]>=1&&arr[1]<=1000000)
            cout<<arr[1]<<endl;
        else
            cout<<"-1"<<endl;
    }
    else if(index==2)
    {
        arr[2]=arr[3]-arr[0]-arr[1];
        if(m==4&&arr[2]>=1&&arr[2]<=1000000)
            cout<<arr[2]<<endl;
        else if(m==5&&(arr[1]+arr[2]+arr[3]==arr[4])&&arr[2]>=1&&arr[2]<=1000000)
            cout<<arr[2]<<endl;
        else if(m>5&&(arr[1]+arr[2]+arr[3]==arr[4])&&(arr[2]+arr[3]+arr[4]==arr[5])&&arr[2]>=1&&arr[2]<=1000000)
            cout<<arr[2]<<endl;
        else
            cout<<"-1"<<endl;
    }
    else
        compare(arr,m);



}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        printf("case #%d:\n",i);
        solve();
    }
    return 0;

}
