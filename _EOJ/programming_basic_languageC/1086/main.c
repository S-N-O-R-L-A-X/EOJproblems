#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,k,n,len,index;
    char str[81];
    char password[]={'O','I','Z','E','A','S','G','T','B','P'};
    scanf("%d",&n);getchar();
    for(i=1;i<=n;)
    {
        gets(str);
        len=strlen(str);
        if(len==0)
        {
            i++;
            printf("\n");
        }
        else
        {
            for(j=0;j<=len-1;j++)
            {
                index=str[j]-'0';
                if(index<=9&&index>=0)
                    printf("%c",password[index]);
                else
                    printf("%c",str[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
