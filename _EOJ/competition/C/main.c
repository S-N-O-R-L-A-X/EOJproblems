#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
    char *p=(char *)malloc(1000001*sizeof(char));

    scanf("%s",p);
    int i,len,flag,index;
    len=strlen(p);
    if(p[i]!='a'&&p[i]!='e'&&p[i]!='i'&&p[i]!='o'&&p[i]!='u'&&p[i]!='w'&&p[i]!='y')
        flag=0;
    else
        flag=1;
    for(i=1;i<=len-1;i++)
    {
        if(p[i]!='a'&&p[i]!='e'&&p[i]!='i'&&p[i]!='o'&&p[i]!='u'&&p[i]!='w'&&p[i]!='y')
        {
            if(flag==0)
            {
                index=i-1;
                printf("%c",toupper(p[index]));
                flag=1;
            }
            else
            {
                flag=0;
                printf("%c",p[i-1]);
            }
        }
        else
        {
            if(flag==0)
            {
                printf("%c",toupper(p[i-1]));
                flag=1;
            }
            else
                printf("%c",p[i-1]);
        }
    }
    if(flag==0&&p[len-1]!='a'&&p[len-1]!='e'&&p[len-1]!='i'&&p[len-1]!='o'&&p[len-1]!='u'&&p[len-1]!='w'&&p[len-1]!='y')
        printf("%c",toupper(p[len-1]));
    else
        printf("%c",p[len-1]);
    free(p);

    return 0;
}
