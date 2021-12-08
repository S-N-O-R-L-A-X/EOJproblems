#include <iostream>

using namespace std;

class mystack
{
public:
    mystack()
    {
        cnt=0;
    }

    void push(int x);
    void pop();
    int Max();
private:
    int arr[100000];
    int cnt;
};


int main()
{
    mystack s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            int x;
            cin>>x;
            s.push(x);
        }
        else if(type==2)
            s.pop();
        else
            cout<<s.Max()<<endl;

    }
    return 0;
}

void mystack::push(int x)
{
    if(cnt==100000)
        return ;
    arr[cnt++]=x;
}

void mystack::pop()
{
    cnt--;
}

int mystack::Max()
{
    int M=0;
    for(int i=0;i<cnt;i++)
        M=(arr[i]>M?arr[i]:M);
    return M;
}
