#include <iostream>
#define maxsize 81
using namespace std;
int arr[maxsize][maxsize];


void zigzag(int n)
/*
reference:
fill in round by round
like
first
1
second
  2
4 3
third
    9
    8
5 6 7
*/
{
    int i=1,j=1,cnt=1;
    while(cnt<=n*n)
    {
        for(int line=1;line<=n;line++)
        {
            if(line%2)
            {
                for(int c=1;c<=line;c++)
                    arr[line][c]=cnt++;
                for(int r=line-1;r>=1;r--)
                    arr[r][line]=cnt++;
            }
            else
            {

                for(int r=1;r<=line;r++)
                    arr[r][line]=cnt++;
                for(int c=line-1;c>=1;c--)
                    arr[line][c]=cnt++;
            }
        }

    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        cout<<"case #"<<i<<':'<<endl;
        for(int j=0;j<=n;j++)
        {
            for(int k=0;k<=n;k++)
                arr[j][k]=0;
        }
        zigzag(n);
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<n;k++)
                cout<<arr[j][k]<<' ';
            cout<<arr[j][n]<<endl;
        }
    }
    return 0;
}
