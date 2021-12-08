#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int i=0;i<t;i++)
    {
        char ch;int arr[30];int cnt=0;
        while(1)
        {
            ch=getchar();
            if(ch=='\n')
                break;
            if(ch=='-')
                arr[cnt++]=-1;
            else if(ch=='0')
                arr[cnt++]=0;
            else
                arr[cnt++]=1;
        }
        int ans=0;
        for(int j=0;j<cnt;j++)
            ans=arr[j]+ans*3;
        printf("case #%d:\n%d\n",i,ans);
    }

    return 0;
}
