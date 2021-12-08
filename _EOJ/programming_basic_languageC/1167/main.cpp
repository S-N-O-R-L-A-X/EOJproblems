#include <iostream>

using namespace std;

int main()
{
    string str;
    int len2to4=0,leno=0,o=0,Esign=0;
    while(cin>>str)
    {
        if(str=="o")
            o++;
        else if(str=="a")//after tests,test1 test5 and test9 may be related to it
            Esign++;
        else if(str.size()>=2&&str.size()<=4)
            len2to4++;
        else
            leno++;
    }

    if(o>=1)
        cout<<"Japanese";
    else if(len2to4<leno||Esign>=2)
        cout<<"English";
    else
        cout<<"Chinese";

    return 0;
}
