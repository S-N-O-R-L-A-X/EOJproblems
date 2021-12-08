#include <iostream>

using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int tmp=n;
        int cnt=0;
        for(int w=0;4*w<=n;w++)
        {
            tmp=n-4*w;
            for(int x=0;3*x<=tmp;x++)
            {
                int tmp2=tmp-3*x;
                for(int y=0;2*y<=tmp2;y++)
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
