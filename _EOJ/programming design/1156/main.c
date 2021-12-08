#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int i=0;i<t;i++)
    {
        char s1[200],s2[200],s[200];
        gets(s1);
        gets(s2);
        gets(s);
        int len=strlen(s);
        int len1=strlen(s1);
        int len2=strlen(s2);
        int minleft=-1,maxleft=-1,maxright=-1,minright=-1;
        for(int j=0;j<len;j++)
        {
            if(s1[0]==s[j])
            {
                int m=j;
                for(int k=0;k<len1;k++)
                {
                    if(s1[k]!=s[m++])
                        break;
                    if(k==len1-1&&minleft==-1)
                        minleft=m-1;//find the leftest
                    if(k==len1-1)
                        maxleft=m-len1;//find the rightest
                }
            }
        }
        for(int j=len-1;j>=0;j--)
        {
            if(s2[len2-1]==s[j])
            {
                int m=j;
                for(int k=len2-1;k>=0;k--)
                {
                    if(s2[k]!=s[m--])
                        break;
                    if(k==0&&maxright==-1)
                        maxright=m+1;//find the rightest
                    if(k==0)
                        minright=m+len2;//find the leftest
                }
            }
        }
        int max1=maxright-minleft;
        int max2=maxleft-minright;
        if(maxright==-1||minleft==-1||(max1<=0&&max2<=0))//judge not found or coincide
            printf("case #%d:\n0\n",i);
        else if(max1<max2)
            printf("case #%d:\n%d\n",i,max2-1);
        else
            printf("case #%d:\n%d\n",i,max1-1);
    }
    return 0;
}
