#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,x,y;
    while(scanf(" %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)&&(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0))
    {
        x=(2*b+d+f-c-e)/2;
        y=(2*a+c+e-d-f)/2;
        printf("Anna's won-loss record is %d-%d.\n",x,y);
    }
    return 0;
}
