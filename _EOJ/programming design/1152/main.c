#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int t;
    char rubbish[6][4]={"THE","A","AN","OF","FOR","AND"};
    scanf("%d",&t);
    getchar();
    for(int i=0;i<t;i++)
    {
        int cnt=0;
        char str[101];
        gets(str);
        for(int j=0;j<strlen(str);j++)
            str[j]=toupper(str[j]);
        char *p=strtok(str," ");
        while(p)
        {
            int flag=1;
            for(int j=0;j<6;j++)
            {
                if(!strcmp(p,rubbish[j]))
                    flag=0;
            }
            if(flag)
                cnt++;
            p=strtok(NULL," ");
        }
        printf("case #%d:\n%d\n",i,cnt);
    }

    return 0;
}
