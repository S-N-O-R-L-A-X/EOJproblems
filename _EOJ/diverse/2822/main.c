#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addressF(char str[])
{
    double x=atof(str);
    unsigned char *p=(unsigned char *)&x;
    int y=sizeof(x);
    while(y--)
        printf("%02x ",*p++);
    //0 means that vacancy will be supplemented by 0
    //2 means that width is 2
    //x means the alpha will be shown uncapitalized
    printf("\n");
}

void addressI(char str[])
{
    int x=atoi(str);
    int y=sizeof(x);
    unsigned char *p=(unsigned char *)&x;
    while(y--)
        printf("%02x ",*p++);
    printf("\n");
}

int main()
{
    char str[21];
    while(gets(str)&&strlen(str)!=0)
    {
        if(strchr(str,'.'))
            addressF(str);
        else
            addressI(str);
    }
    return 0;
}

