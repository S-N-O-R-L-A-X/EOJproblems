#include <iostream>
#include <algorithm>
using namespace std;

struct student
{
    string no;
    string name;
    int s1,s2,s3;
};

bool cmp(student stu1,student stu2)
{
    int all1=stu1.s1+stu1.s2+stu1.s3;
    int all2=stu2.s1+stu2.s2+stu2.s3;
    if(all1!=all2)
        return all1>all2;
    return stu1.no<stu2.no;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        student stu[n];
        for(int j=0;j<n;j++)
            cin>>stu[j].no>>stu[j].name>>stu[j].s1>>stu[j].s2>>stu[j].s3;
        sort(stu,stu+n,cmp);
        printf("case #%d:\n",i);
        for(int j=0;j<n;j++)
            cout<<stu[j].no<<' '<<stu[j].name<<' '<<stu[j].s1<<' '<<stu[j].s2<<' '<<stu[j].s3<<' '<<endl;
    }
    return 0;
}
