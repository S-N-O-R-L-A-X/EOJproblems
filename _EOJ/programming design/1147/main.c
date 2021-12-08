#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[2001];
    char del[101];
    int t,i,j,k,m,n,len1,len2;
    scanf("%d",&t);
    getchar();
    for(i=0;i<=t-1;i++)
    {
        scanf("%s",str);
        scanf("%s",del);
        len1=strlen(str);
        len2=strlen(del);
        printf("case #%d:\n",i);
        for(j=0;j<=len1-1;j++)
        {
            if(str[j]==del[0])
            {
                k=j+1;
                for(m=1;m<=len2-1;m++)
                {
                    if(str[k]!=del[m])
                    {
                        printf("%c",str[j]);
                        break;
                    }
                    k++;
                    if(m==len2-1)
                        j=j+len2-1;
                }
            }
            else
                printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}
