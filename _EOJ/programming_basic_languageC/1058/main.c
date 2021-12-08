#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int n,i,j,len,num,ch,rest;
    char str[10001];
    scanf("%d",&n);getchar();
    for(i=1;i<=n;i++)
    {
        gets(str);num=0;ch=0;rest=0;
        len=strlen(str);
        for(j=0;j<=len-1;j++)
        {

            if(isdigit(str[j]))
                num++;
            else if(isalpha(str[j]))
                ch++;
            else
                rest++;
        }
        printf("character:%d\n",ch);
        printf("number:%d\n",num);
        printf("others:%d\n",rest);

    }
    return 0;
}
