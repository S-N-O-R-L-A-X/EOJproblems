#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int cnt=0;
        for(int i=0;i<32;i++)
        {
            if(c&1)
            {
                if((a&1)||(b&1)) ;
                else
                    cnt++;
            }
            else
            {
                if(a&1)
                    cnt++;
                if(b&1)
                    cnt++;
            }
            a>>=1;b>>=1;c>>=1;
        }

        cout<<cnt<<endl;
    }
    return 0;
}
