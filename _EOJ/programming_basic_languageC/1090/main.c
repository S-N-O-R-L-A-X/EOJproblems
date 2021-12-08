#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salary,tax,rate;
    scanf("%lf",&salary);
    if(salary-1500<=1E-9)
        tax=0;
    else if(salary-1500>1E-9&&salary-3000<=1E-9)
    {
        rate=0.05;
        tax=rate*(salary-1500);
    }
    else if(salary-3000>1E-9&&salary-5000<=1E-9)
    {
        rate=0.1;
        tax=rate*(salary-1500);
    }
    else if(salary-5000>1E-9&&salary-10000<=1E-9)
    {
        rate=0.15;
        tax=rate*(salary-1500);
    }
    else
    {
        rate=0.2;
        tax=rate*(salary-1500);
    }

    printf("%.2lf",tax);
    return 0;
}
