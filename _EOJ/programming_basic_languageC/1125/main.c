#include <stdio.h>
#include <stdlib.h>

int Sec2HMS(int second);
/* PreCondition:
     second 是以秒数表示的一段时间，0<=时长<100小时
   PostCondition:
     返回以HHMMSS形式表示的等长的一段时间,整数中开头的0可忽略，如010010为10010，表示1小时零10秒
*/
int Sec2HMS(int second)
{ //TODO: your function definition
    int n=0;
    int h,min;
    h=second/3600;
    second=second-h*3600;
    min=second/60;
    n=second-min*60;
    n=n+min*100;
    n=n+h*10000;
    return n;
}


int main()
{
    int second;
    scanf("%d", &second);
    printf("%d\n", Sec2HMS(second));
    return 0;
}
