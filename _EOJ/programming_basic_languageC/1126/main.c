#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n,i,j,k,t;
    scanf("%d",&t);
    getchar();
    char str[201];
    for(i=0;i<t;i++)
    {
        int alpha[26]={0};
        int flag[200]={0};
        gets(str);
        for(j=0;j<strlen(str);j++)
        {
            n=str[j]-'A';
            if(n>=0&&n<=25)
                alpha[n]++;
            else
                flag[j]=1;
        }
        int k=0;
        printf("case #%d:\n",i);
        for(j=0;j<strlen(str);j++)
        {
            if(flag[j])
                printf("%c",str[j]);
            else
            {
                int tag=1;
                while(tag)
                {
                    if(alpha[k])
                    {
                        printf("%c",k+'A');
                        alpha[k]--;
                        tag=0;
                    }
                    else
                        k++;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
