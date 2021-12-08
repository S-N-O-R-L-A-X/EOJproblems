#include <iostream>
#include <queue>
using namespace std;

bool path[1000][80];
char photo[1001][81];
int w,h;

void dfs(int x,int y,int& cnt)
{
    if(x>=h||x<0||y>=w||y<0)
        return ;

    if(photo[x][y]=='*'&&path[x][y])
    {
        path[x][y]=false;
        cnt++;
        dfs(x+1,y,cnt);
        dfs(x-1,y,cnt);
        dfs(x,y+1,cnt);
        dfs(x,y-1,cnt);
    }
}


int main()
{
    cin>>w>>h;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            path[i][j]=true;
            cin>>photo[i][j];
        }
    }
    int cnt=0,ans=0;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            if(photo[i][j]=='*')
                dfs(i,j,cnt);
            if(cnt>ans)
                ans=cnt;
            cnt=0;
        }
    }
    cout<<ans;
    return 0;
}

/*
test:
3 3
*.*
**.
***
*/
