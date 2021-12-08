#include <iostream>
#include <string>

using namespace std;
string func;
char coordination[41][41];
int findOP(int start)
{
    for(int i=start+1;i<func.size();i++)
    {
        if(func[i]=='+'||func[i]=='-')
            return i;
    }
    return func.size();
}

void initialize()
{
    for(int i=0;i<41;i++)
    {
        for(int j=0;j<41;j++)
        {
            coordination[i][j]='.';
        }
    }
    for(int j=0;j<41;j++)
        coordination[20][j]='-';
    coordination[20][40]='>';


    for(int i=1;i<41;i++)
        coordination[i][20]='|';
    coordination[0][20]='^';

    coordination[20][20]='+';
}

int main()
{

    while(cin>>func&&cin.get())
    {
        initialize();
        bool flag=true;
        int coef3=0,coef2=0,coef1=0,coef0=0;
        func=func+'+';
        int next;
        for(int i=5;i!=func.size()-1;)//delete f(x)=
        {
            int next=findOP(i);
            string monomial(func,i,next-i);
            if(monomial.size()>=2&&monomial[monomial.size()-2]=='^')//coef=2or3
            {
                string num(monomial,0,next-i-2);
                int tmp=atoi(num.c_str());
                if(monomial[monomial.size()-1]=='3')//exp=3
                {
                    if(tmp==0)//when coef ==1or-1
                    {
                        if(monomial[0]=='-')
                            tmp=-1;
                        else
                            tmp=1;
                    }
                    coef3=tmp;
                }
                else//exp=2
                {
                    if(tmp==0)//when coef ==1or-1
                    {
                        if(monomial[0]=='-')
                            tmp=-1;
                        else
                            tmp=1;
                    }
                    coef2=tmp;
                }
            }
            else
            {
                int tmp=atoi(monomial.c_str());
                if(monomial[monomial.size()-1]=='x')//exp=1
                {
                    if(tmp==0)//when coef =1or-1
                    {
                        if(monomial[0]=='-')
                            tmp=-1;
                        else
                            tmp=1;
                    }
                    coef1=tmp;
                }

                else//exp=0
                    coef0=tmp;
            }
            i=next;
        }


        for(int x=-20;x<=20;x++)
        {
            int y=coef3*x*x*x+coef2*x*x+coef1*x+coef0;
            if(y<=20&&y>=-20)
                coordination[20-y][x+20]='*';
        }

        for(int i=0;i<41;i++)
        {
            for(int j=0;j<41;j++)
                cout<<coordination[i][j];
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
