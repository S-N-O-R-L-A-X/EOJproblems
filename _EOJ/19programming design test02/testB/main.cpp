#include <iostream>

using namespace std;

string date[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};


int index(string day)
{
    for(int i=0;i<7;i++)
    {
        if(day.find(date[i])!=day.npos)
            return i;
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string week,day;
        cin>>week>>day;
        string x(week,4);
        int weeknum=atoi(x.c_str());
        int delta=(weeknum-1)*7+index(day);
        char ans=delta%6+'A';
        cout<<ans<<' '<<"sir"<<endl;
    }
    return 0;
}
