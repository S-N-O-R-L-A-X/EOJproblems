#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int i=0;i<t;i++)
    {
        int j,k,l;
        char word[200];//it seems that the max length is 20+
        gets(word);
        for(j=0;j<strlen(word);j++)
            word[j]=toupper(word[j]);
        char str[1000300];
        int begin=-1;
        gets(str);
        int len=strlen(str);
        char copy[len+1];
        strcpy(copy,str);//make a backup
        for(j=0;j<len;j++)
            copy[j]=toupper(copy[j]);
        for(j=0;j<len;j++)
        {
            if(word[0]==copy[j]&&(j==0||copy[j-1]==' '))//judge whether it is a word
            {
                l=j;
                for(k=0;k<strlen(word);k++)
                {
                    if(word[k]!=copy[l++])
                        break;
                    if(k==strlen(word)-1&&(l==len||copy[l]==' '))
                        begin=j;
                }
            }
            if(begin!=-1)
                break;
        }

        printf("case #%d:\n",i);
        if(begin==-1)
            printf("None\n");
        else
            printf("%d\n",begin+1);//string starts from 0
    }
    return 0;
}
