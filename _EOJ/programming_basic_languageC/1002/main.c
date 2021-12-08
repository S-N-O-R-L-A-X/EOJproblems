#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[2002];char origin[2002];
    char change[2002];
    int i,j,same,temp,len1,len2;

    gets(str);
    scanf("%s",origin);
    scanf("%s",change);
    len1=strlen(origin);
    len2=strlen(str);
    for(i=0;i<=len2-1;i++)
    {
        same=0;
        if(str[i]==origin[0])
        {
            temp=i+1;
            if(len1==1)
                {
                    printf("%s",change);
                    i=i+len1-1;
                }
            else
            {
                for(j=1;j<=len1-1;j++)
                {
                    if(str[temp]==origin[j])
                        temp++;
                    else
                        {
                            printf("%c",str[i]);
                            break;
                        }
                    if(j==len1-1)
                    {
                        printf("%s",change);
                        i=i+len1-1;
                    }
                }
            }
        }
        else
            printf("%c",str[i]);

    }

    return 0;
}
