#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

long long GCD(long long a,long long b)
{
    if(b==0)
        return a;
    return GCD(b,a%b);
}

long long LCD(long long a,long long b)
{
    return a/GCD(a,b)*b;
}

void finiteTOfraction(long long a,string sfrac,long long &n,long long &m);

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string str;
        cin>>str;
        cout<<"case #"<<i<<':'<<endl;
        if(str.find('[')==str.npos)//finite number
        {
            int point=str.find('.');
            string sint(str,0,point);
            string sfrac(str,point+1);
            long long a=atoll(sint.c_str());
            long long n=0,m=0;
            finiteTOfraction(a,sfrac,n,m);
            cout<<n<<'/'<<m<<endl;
        }
        else
        {
            //a.b[c]
            int first=str.find('[');
            int last=str.find(']');
            int point=str.find('.');
            string sint(str,0,point);//before point
            string sfrac1(str,point+1,first-point-1);//the fraction before repetend
            string sfrac2(str,first+1,last-first-1);//the repetend
            long long a=atoll(sint.c_str());
            long long b=atoll(sfrac1.c_str());
            long long c=atoll(sfrac2.c_str());
            int delta=first-point-1;
            int len=sfrac2.size();//the length of repetend
            long long n,m,temp;//n/m means the repetend
            long long times=1;
            for(int j=1;j<=len;j++)
                times*=10;
            //S=a1/(1-q)=u/(1-1/times) both*times=>c/(times-1)
            n=c;
            m=times-1;
            times=1;
            for(int j=1;j<=delta;j++)
                times*=10;
            m*=times;
            temp=GCD(n,m);
            n/=temp;
            m/=temp;

            long long x=0,y=0,p,q;//x/y means the num before repetend
            finiteTOfraction(a,sfrac1,x,y);
            //the next 5 steps is x/y+n/m
            q=LCD(m,y);
            p=LCD(m,y)/y*x+LCD(m,y)/m*n;
            temp=GCD(p,q);
            p/=temp;
            q/=temp;
            /*q=y*m;
            p=x*m+y*n;
            temp=GCD(p,q);
            p/=temp;
            q/=temp;*///it may exceed the max of long long
            cout<<p<<'/'<<q<<endl;
        }
    }
    return 0;
}

void finiteTOfraction(long long a,string sfrac,long long &n,long long &m)
{
    long long b=atoll(sfrac.c_str());
    long long times=1;
    for(int j=1;j<=sfrac.size();j++)
        times*=10;
    n=a*times+b;//numerator
    long long temp=GCD(times,n);
    m=times/temp;//denominator
    n/=temp;
}
