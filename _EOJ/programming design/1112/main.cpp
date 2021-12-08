#include <iostream>
#include <string>
using namespace std;

/*
reference:
comparing from beginning to end,if there is an error,
then the present position -- and the numbers after it can all become 9,
and the numbers before it should be checked again whether there is an error.
*/

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string num;
        cin>>num;
        int len=num.size();
        for(int j=0;j<len-1;j++)
        {
            if(num[j]>num[j+1])
            {
                num[j]--;
                for(int k=j+1;k<len;k++)
                    num[k]='9';
                for(int k=j;k>0;k--)
                {
                    if(num[k]<num[k-1])
                    {
                        num[k-1]--;
                        num[k]='9';//if the former pos --,the present pos =9
                    }
                }
                break;
            }
        }
        printf("case #%d:\n",i);

        for(int j=0;j<num.size();j++)
        {
            if(num[j]!='0')
                cout<<num[j];
        }
        cout<<endl;
    }
    return 0;
}

/*
test1:1233445509
test2:2345678
test3:1000
test4:10
test5:1
test6:391458953027532635
test7:100234
*/
