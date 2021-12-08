#include <iostream>
#include <string.h>
using namespace std;

void BigInt_Plus(char a[],char b[],int ans[])
{
    int len1=strlen(a);
    int len2=strlen(b);
    int j=0;
    for(int i=len1-1;i>=0;i--)
        ans[j++]=a[i]-'0';
    int len=j;
    j=0;
    for(int i=len2-1;i>=0;i--)
    {
        ans[j++]+=(b[i]-'0');
        if(j>len)
            len=j;
    }
    for(int i=0;i<len;i++)//judge Carry
    {
        if(ans[i]>=10)
        {
            ans[i]%=10;
            ans[i+1]++;
            if(i==len-1)
                len++;
        }
    }
    ans[len]=-1;
    for(int i=len-1;i>=len/2;i--)//inverse
    {
        int temp=ans[i];
        ans[i]=ans[len-1-i];
        ans[len-1-i]=temp;
    }
}

int main()
{
    char str1[600],str2[600];
    while(cin>>str1>>str2)
    {
        int ans[600]={0};
        BigInt_Plus(str1,str2,ans);
        int i=0;
        while(ans[i]!=-1)
            cout<<ans[i++];
        cout<<endl;
    }
    return 0;
}
