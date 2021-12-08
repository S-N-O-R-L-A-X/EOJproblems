#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define g 9.8
#define p 1.75

int main()
{
    double t,h;
    int n;

    while( scanf("%d",&n) )
    {
        if( n == 0 ) break;
        else if( n == 1 || n == 2 ){
            h=(n-1)*5+p;
            printf("%.3lf\n",sqrt(2*h/g));
        }else if( n >= 3 ){
            h=10+(n-3)*3+p;
            printf("%.3lf\n",sqrt(2*h/g));
        }
    }
    return 0;
}
