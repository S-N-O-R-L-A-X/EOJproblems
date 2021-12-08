#include <iostream>

using namespace std;

int main()
{
    int YHtriangle[31][31]={0};
    int i,j,n;
    for(i=1;i<31;i++)
        YHtriangle[i][1]=1;

    for(i=2;i<31;i++)//control row
    {
        for(j=2;j<=i;j++)//control column
        {
            YHtriangle[i][j]=YHtriangle[i-1][j-1]+YHtriangle[i-1][j];
        }
    }


    while(cin>>n&&n!=0)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<YHtriangle[i][j];
                if(j==i)
                    cout<<endl;
                else
                    cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

