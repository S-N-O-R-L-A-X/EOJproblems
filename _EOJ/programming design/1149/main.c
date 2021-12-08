#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int del(char str[]);
int max(int a,int b);

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int i=0;i<t;i++)
    {
        char s[101],temp[101];
        scanf("%s",s);
        int j,len=strlen(s),ans=0;
        for(j=0;j<=len;j++) // 插入在字符串s的第一个字符之前、相邻两个字符之间以及最后一个字符之后
        {
            strncpy(temp,s,j);//take j alphas from s and store in temp
            temp[j] ='\0';
            strcat(temp,"A");//insert A
            strcat(temp,s+j);//take the rest from s and store it in temp
            ans=max(ans,del(temp));

            strncpy(temp,s,j);
            temp[j] ='\0';
            strcat(temp,"B");
            strcat(temp,s+j);
            ans=max(ans,del(temp));

            strncpy(temp,s,j);
            temp[j] ='\0';
            strcat(temp,"C");
            strcat(temp,s+j);
            ans=max(ans,del(temp));
        }
        printf("case #%d:\n%d\n",i,ans);
    }
    return 0;
}

int del(char str[])
{
    char s1[101],s2[101];
    strcpy(s1,str);
    int slen=strlen(s1),len2=0,i,l=0;//slen is the length of original string,len2 is the length of the remaining string
    if (slen==0)
        return 0;
    s1[slen]='$';//convenient for elimination
    s1[slen+1]='\0';
    for(i=1;i<slen+1;i++)
    {
        if(s1[i]!=s1[i-1])//stores the deleted string
        {
            if(l==i-1)
                s2[len2++]=s1[i-1];
            l = i;
        }
    }
    s2[len2] = '\0';
    if (slen==len2)//nothing can be eliminated
        return 0;
    return slen - len2 + del(s2);
}


int max(int a,int b)
{
    return a<b?b:a;
}

