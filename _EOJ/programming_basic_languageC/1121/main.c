#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int t;
    double out;
    scanf("%d",&t);
    ch=getchar();
    if(ch=='f')
    {
        out=((double)t-32)*5/9;
        printf("%.2lfc",out);
    }
    else
    {
        out=((double)t*9/5)+32;
        printf("%.2lff",out);
    }
    return 0;
}
