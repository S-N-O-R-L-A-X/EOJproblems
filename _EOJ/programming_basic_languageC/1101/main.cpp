#include <iostream>
#include <cmath>
using namespace std;
/*
reference:
If no one treats others on the first day,it means that there are at least
2 pregnant mice because if there is only one pregnant mouse,the owner of
the pregnant mouse will find that no one else owns a pregnant mouse,he
will treat others.

Likewise,if there is still no treat on the second day,it means that
there are at least 3 mice because if there is only 2 pregnant mice,
the owner of the pregnant mouse will consider that if there was only
one pregnant mouse that he saw on the first day,the owner would treat
others.So his mouse must be pregnant and he should treat others.

...

so k means the amount of mice.
*/
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k,m;
        cin>>n>>k>>m;
        int ans=(k<=m?0:(long long)ceil((double)(k-m)/m)%7);
        switch(ans)
        {
            case 0:cout<<"Monday"<<endl;break;
            case 1:cout<<"Tuesday"<<endl;break;
            case 2:cout<<"Wednesday"<<endl;break;
            case 3:cout<<"Thursday"<<endl;break;
            case 4:cout<<"Friday"<<endl;break;
            case 5:cout<<"Saturday"<<endl;break;
            default:cout<<"Sunday"<<endl;break;
        }
    }
    return 0;
}
