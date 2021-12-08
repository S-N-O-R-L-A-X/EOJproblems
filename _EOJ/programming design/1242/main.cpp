#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;

string equation;

int FindOP(string str,int start)
{
    for(int i=start+1;i<str.size();i++)
    {
        if(str[i]=='+'||str[i]=='-')
            return i;
    }
    return str.size();
}


int main()
{
    cin>>equation;
    int a=0,b=0,i;//ax=b
    char alpha;
    bool sign=true;
    int delim=equation.find('=');
    char tmp[80];
    if(equation[0]=='+'||equation[0]=='-')
    {
        for(i=0;i<delim;i++)
            tmp[i]=equation[i];
        tmp[i++]='+';
        tmp[i]='\0';
    }
    else
    {
        tmp[0]='+';
        for(i=1;i<=delim;i++)
            tmp[i]=equation[i-1];
        tmp[i++]='+';
        tmp[i]='\0';
    }
    string left(tmp);

    if(equation[delim+1]=='+'||equation[delim+1]=='-')
    {
        for(i=0;i<equation.size()-delim;i++)
            tmp[i]=equation[i+delim+1];
        tmp[i++]='+';
        tmp[i]='\0';
    }
    else
    {
        tmp[0]='+';
        for(i=1;i<equation.size()-delim;i++)
            tmp[i]=equation[delim+i];
        tmp[i++]='+';
        tmp[i]='\0';
    }
    string right(tmp);



    for(i=0;i!=left.size()-1;)//= left
    {
        int next=FindOP(left,i);
        if(i==0&&left[0]=='-')
            sign=false;

        string monomial(left,i+1,next-i-1);
        if(left[next-1]>'9')//x
        {
            alpha=left[next-1];
            string num(monomial,0,next-i-2);
            int temp;
            if(num.size()==0)
                temp=1;
            else
                temp=atoi(num.c_str());
            if(sign)
                a+=temp;
            else
                a-=temp;
        }
        else
        {
            string num(monomial,0,next-i);
            if(sign)//it's inverse because number should be shifted right
                b-=atoi(num.c_str());
            else
                b+=atoi(num.c_str());
        }

        if(left[next]=='+')
            sign=true;
        else
            sign=false;
        i=next;
    }
    sign=true;

    for(i=0;i!=right.size();)//= right
    {
        int next=FindOP(right,i);
        if(i==0&&right[0]=='-')
            sign=false;

        string monomial(right,i+1,next-i-1);
        if(right[next-1]>'9')//x
        {
            alpha=right[next-1];
            string num(monomial,0,next-i-2);
            int temp;
            if(num.size()==0)
                temp=1;
            else
                temp=atoi(num.c_str());
            if(sign)//inverse
                a-=temp;
            else
                a+=temp;
        }
        else
        {
            string num(monomial,0,next-i);
            if(sign)
                b+=atoi(num.c_str());
            else
                b-=atoi(num.c_str());
        }

        if(right[next]=='+')
            sign=true;
        else
            sign=false;
        i=next;
    }
    double ans=(double)b/(double)a;
    printf("%c=%.3f",alpha,ans);
    return 0;
}
