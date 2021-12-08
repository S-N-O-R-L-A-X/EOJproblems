#include <stdio.h>
#include <stdlib.h>

int Sec2HMS(int second);
/* PreCondition:
     second ����������ʾ��һ��ʱ�䣬0<=ʱ��<100Сʱ
   PostCondition:
     ������HHMMSS��ʽ��ʾ�ĵȳ���һ��ʱ��,�����п�ͷ��0�ɺ��ԣ���010010Ϊ10010����ʾ1Сʱ��10��
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
