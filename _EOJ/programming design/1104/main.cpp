#include <iostream>

using namespace std;
int arr[10][10];

void snake(int n)
{
    int cnt=1;
    int x=0,y=0;
    while(cnt<n*n)
    {
        while(y<n-1&&arr[x][y+1]==0)//right
            arr[x][y++]=cnt++;
        while(x<n-1&&arr[x+1][y]==0)//down
            arr[x++][y]=cnt++;
        while(y>0&&arr[x][y-1]==0)//left
            arr[x][y--]=cnt++;
        while(x>0&&arr[x-1][y]==0)//up
            arr[x--][y]=cnt++;
    }
    arr[x][y]=cnt;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                arr[i][j]=0;
        }
        snake(n);
        cout<<"case #"<<i<<':'<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<arr[i][j]<<' ';
            cout<<endl;
        }
    }
    return 0;
}
