#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415927


int main()
{
    double diameter,time;
    int revolution,round;
    double distance;double mph;
    round=1;
    while(scanf("%lf %d %lf",&diameter,&revolution,&time)&&revolution!=0)
    {
        distance=diameter*PI*revolution/12/5280;
        mph=distance/time*60*60;
        printf("Trip #%d: %.2lf %.2lf\n",round,distance,mph);
        round++;
    }
    return 0;
}
