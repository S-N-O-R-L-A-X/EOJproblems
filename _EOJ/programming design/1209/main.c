#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxsize 201
char HEX[17]="0123456789ABCDEF";
int index(char ch);
int realLEN(char str[]);

int main()
{
    int t,j;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char str1[maxsize],str2[maxsize];
        scanf("%s %s",str1,str2);
        int rlen1=realLEN(str1);
        int rlen2=realLEN(str2);
        int len1=strlen(str1);
        int len2=strlen(str2);
        int rdelta=rlen1-rlen2;
        int delta=len1-len2;
        int carry=0,temp;
        char ans[maxsize]="0";//prevent 0 0 and situations like this
        printf("case #%d:\n",i);
        if(rdelta>0)
        {
            for(j=len2-1;j>=len2-rlen2;j--)
            {
                temp=carry+index(str2[j])+index(str1[j+delta]);
                ans[j+delta]=HEX[temp%16];
                carry=temp/16;
            }
            for(j=rdelta-1;j>=0;j--)
            {
                temp=carry+index(str1[j]);
                ans[j]=HEX[temp%16];
                carry=temp/16;
            }
            if(carry)
                printf("1");
            for(j=0;j<len1+1;j++)
                printf("%c",ans[j]);
            printf("\n");
        }
        else
        {
            for(j=len1-1;j>=len1-rlen1;j--)
            {
                temp=carry+index(str1[j])+index(str2[j-delta]);
                ans[j-delta]=HEX[temp%16];
                carry=temp/16;
            }
            for(j=-rdelta-1;j>=0;j--)
            {
                temp=carry+index(str2[j]);
                ans[j]=HEX[temp%16];
                carry=temp/16;
            }
            if(carry)
                printf("1");
            for(j=0;j<len2;j++)
                printf("%c",ans[j]);
            printf("\n");
        }
    }

    return 0;
}

int index(char ch)
{
    for(int i=0;i<16;i++)
    {
        if(HEX[i]==ch)
            return i;
    }
}

int realLEN(char str[])
{
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]!='0')
            break;
    }
    return strlen(str)-i;
}
