#include <iostream>
#include <algorithm>
using namespace std;

struct goods
{
    string no;
    string date;
    int price;
};

bool cmp(goods a,goods b)
{
    if(a.date!=b.date)
        return b.date<a.date;
    else if(a.price!=b.price)
        return a.price<b.price;
    else
        return a.no<b.no;

}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        goods item[n];
        for(int j=0;j<n;j++)
            cin>>item[j].no>>item[j].date>>item[j].price;
        sort(item,item+n,cmp);
        cout<<"case #"<<i<<':'<<endl;
        for(int j=0;j<n;j++)
            cout<<item[j].no<<' '<<item[j].date<<' '<<item[j].price<<endl;;
    }
    return 0;
}
