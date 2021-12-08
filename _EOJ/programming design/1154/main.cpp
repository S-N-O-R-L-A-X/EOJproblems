#include <iostream>
#include <string>
using namespace std;

void lenLEp(string m,int p,int shift)
{
    int len=m.size();
    int j;
    cout<<m[0]<<'.';
    for(j=1;j<len;j++)
        cout<<m[j];
    for(j=1;j<=p-len;j++)
        cout<<'0';
    if(len-1-shift!=0)
        cout<<'F'<<len-1-shift;
    cout<<endl;
}

void lenGp(string m,int p,int shift)
{
    int j,CF;
    char head=m[0];
    int len=m.size();
    string dec(m,1,p-1);
    if(m[p]-'0'>=5)
        CF=1;
    else
        CF=0;
    for(j=p-2;j>=0;j--)
    {
        dec[j]=dec[j]+CF;
        if(dec[j]-'0'==10)
            dec[j]='0';
        else
        {
            CF=0;
            break;
        }
    }
    if(CF==1)
        head=head+1;//the content before '.' ++
    if(head-'0'-10==0)
    {
        shift--;
        cout<<"1."<<dec;
    }
    else
        cout<<head<<'.'<<dec;
    if(len-1-shift!=0)
        cout<<'F'<<len-1-shift;
    cout<<endl;
}


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string m;
        int p,j,k,CF;
        cin>>m>>p;
        cout<<"case #"<<i<<':'<<endl;
        int len=m.size();
        if(m.find('.')==m.npos)//int
        {
            if(len<=p)
                lenLEp(m,p,0);
            else
                lenGp(m,p,0);
        }
        else//decimal
        {
            int dot=m.find('.');
            int start;
            if(m[0]=='0')
            {
                char temp[300];
                for(j=dot+1;j<len;j++)
                {
                    if(m[j]!='0')
                    {
                        start=j;
                        break;
                    }
                }
                int k=0;
                for(int j=start;j<len;j++)
                    temp[k++]=m[j];
                temp[k]='\0';
                string dec(temp);//transform the decimal into an integer
                if(dec.size()<=p)
                    lenLEp(dec,p,len-dot-1);
                else
                    lenGp(dec,p,len-dot-1);
            }
            else
            {
                char temp[300];
                int k=0;
                for(int j=0;j<len;j++)
                {
                    if(j==dot)
                        continue;
                    temp[k++]=m[j];
                }
                temp[k]='\0';
                string num(temp);//transform the decimal into an integer
                if(num.size()<=p)
                    lenLEp(num,p,num.size()-dot);
                else
                    lenGp(num,p,num.size()-dot);
            }
        }
    }
    return 0;
}
