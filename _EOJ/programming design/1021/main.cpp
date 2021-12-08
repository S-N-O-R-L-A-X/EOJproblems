#include <iostream>


using namespace std;
int matrix[5][5];


struct rmax
{
    rmax();
    int num;
    int pos[5];
    int cnt;
};

rmax::rmax()
{
    num=0;
    pos[0]=0;
    cnt=0;
}

struct cmin
{
    cmin();
    int num;
    int pos[5];
    int cnt;
};

cmin::cmin()
{
    num=999;
    pos[0]=0;
    cnt=0;
}

/*
void search(int ans,int &x,int &y)
{
    for(int r=0;r<5;r++)
    {
        for(int c=0;c<5;c++)
        {
            if(matrix[r][c]==ans)
            {
                x=r;
                y=c;
                return ;
            }
        }
    }
}
*/

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        for(int r=0;r<5;r++)
        {
            for(int c=0;c<5;c++)
                cin>>matrix[r][c];
        }
        //find rmax
        rmax arr1[5];
        cmin arr2[5];
        for(int r=0;r<5;r++)
        {
            for(int c=0;c<5;c++)
            {
                if(matrix[r][c]>arr1[r].num)
                {
                    arr1[r].num=matrix[r][c];
                    arr1[r].pos[0]=c;
                    arr1[r].cnt=1;
                }
                else if(matrix[r][c]==arr1[r].num)
                {
                    arr1[r].pos[arr1[r].cnt++]=c;
                }
            }
        }
        //find cmin
        for(int c=0;c<5;c++)
        {
            for(int r=0;r<5;r++)
            {
                if(matrix[r][c]<arr2[c].num)
                {
                    arr2[c].num=matrix[r][c];
                    arr2[c].pos[0]=r;
                    arr2[c].cnt=1;
                }
                else if(matrix[r][c]==arr2[r].num)
                {
                    arr2[c].pos[arr2[c].cnt++]=r;
                }
            }
        }
        cout<<"case #"<<i<<':'<<endl;
        bool flag=true;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<arr1[i].cnt;j++)
            {
                int tmp=arr1[i].pos[j];//row i,column j
                if(arr1[i].num==arr2[tmp].num)
                {
                    flag=false;
                    cout<<i<<' '<<arr1[i].pos[j]<<endl;
                }
            }

        }
        if(flag)
            cout<<"-1 -1"<<endl;
    }
    return 0;
}
