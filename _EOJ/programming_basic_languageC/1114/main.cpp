#include <iostream>

using namespace std;

int main()
{
    int n,r,c;
    cin>>n>>r>>c;
    char seat[r][c]={'.'};
    if(n>=r+c-1)//fill in a row and a column priorly
    {
        for(int i=0;i<r;i++)
            seat[i][0]='#';
        for(int j=0;j<c;j++)
            seat[0][j]='#';
        n=n-(r+c-1);
        cout<<min(r,c)<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(seat[i][j]=='#')
                    cout<<'#';
                else
                {
                    if(n>0)
                    {
                        cout<<'#';
                        n--;
                    }
                    else
                        cout<<'.';
                }
            }
            cout<<endl;
        }
    }
    else
    {
        int len=(n+1)/2;
        int m=min(r,c);
        if(m<=len)//a long rectangle
        {
            cout<<m<<endl;
            if(r<c)
            {
                for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                    {
                        if(i==0&&j<n-m+1)
                            cout<<'#';
                        else if(j==0)
                        {
                            cout<<'#';
                            n--;
                        }
                        else
                            cout<<'.';
                    }
                    cout<<endl;
                }
            }
            else
            {
                for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                    {
                        if(i==0)
                            cout<<'#';
                        else if(j==0&&j<n-m)//different from r<c,because[0][0]
                        {
                            cout<<'#';
                            n--;
                        }
                        else
                            cout<<'.';
                    }
                    cout<<endl;
                }
            }
        }
        else
        {
            cout<<len<<endl;
            n=n-len;
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    if(i==0&&j<len)
                        cout<<'#';
                    else if(j==0&&n>0)
                    {
                        cout<<'#';
                        n--;
                    }
                    else
                        cout<<'.';
                }
                cout<<endl;
            }
        }
    }

    return 0;
}
/*
test:
9 4 6
12 4 6
4 2 10
4 1 10
3 3 3
3 2 2
2 2 2
4 4 4
1 2 10
17 17 9



*/
