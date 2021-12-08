#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[101];
    char out[101];
    int i,j;

    while(gets(str)&&strlen(str)!=0)
    {
        i=0;
        for(j=0;j<=strlen(str)-1;j++)
            str[j]=toupper(str[j]);


        char *p=strtok(str," -");

        while(p!=NULL)
        {
            if(strcmp(p,"OF")!=0&&strcmp(p,"THE")!=0&&strcmp(p,"A")!=0&&strcmp(p,"AN")!=0&&strcmp(p,"FOR")!=0&&strcmp(p,"AND")!=0)
            {
                out[i]=p[0];
                i++;
            }
            p=strtok(NULL," -");

        }
        out[i]='\0';
        printf("%s\n",out);

    }
    return 0;
}
