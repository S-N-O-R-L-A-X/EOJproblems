#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef struct _array
{
    char a[17];
    int end;
}array;

void insert(char ch,array *arr);
int cmp(const void *a,const void *b);
void recursion_dictionary(char *str,char *strchange);

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int i=0;i<t;i++)
    {
        char str[17];
        array arr={0,0};
        gets(str);
        int j,k;
        int len=strlen(str);
        for(j=0;j<strlen(str);j++)
            insert(str[j],&arr);

        qsort(arr.a,arr.end,sizeof(arr.a[0]),cmp);
        /*for(j=0;j<end;j++)//输出的第一个字符
        {
            int flag=1;
            for(k=j;k<end;k++)
            {
                if(flag)
                    printf("%c")
            }

        }*/
        arr.a[arr.end]='\0';
        printf("case #%d:\n",i);
        recursion_dictionary(arr.a,"");
    }
    return 0;
}

void insert(char ch,array *arr)
{
    for(int i=0;i<arr->end;i++)
    {
        if(ch==arr->a[i])
            return ;
    }
    arr->a[arr->end++]=ch;
}

int cmp(const void *a,const void *b)
{
    char *c=(char *)a;
    char *d=(char *)b;
//    int x=toupper(*c);
//    int y=toupper(*d);
//    if(x!=y)
//        return x-y;
    return *c-*d;
}


void recursion_dictionary(char *str,char *strchange)
{
    if(*str)
    {
        char change[17];
        sprintf(change,"%s%c",strchange,str[0]);
        printf("%s\n",change);
        recursion_dictionary(str+1,change);
        recursion_dictionary(str+1,strchange);
    }
}
