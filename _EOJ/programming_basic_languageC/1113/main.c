#include <stdio.h>
#include <stdlib.h>



int main()
{
    double a,b,c,d;
    /*a+b+c+d=abcd=>两边同除以abcd=>对a,b,c,d任取三个相乘大于1
    又a<b<c<d=>c>1,d>1
    又a+b+c+d<=20=>c<10,d<19
    又abc>1=>ab>1/10
    又b+c+d<20则b<20/3即b<=6.66
    当b*c取最大值时,a取最小值。又b+c+d<20=>c<20-b-c=>c<10-b/2=>b*c<b*(10-b/2)=>b*c<=400/9=>a>=9/400即a>=0.03
    当a=b=c=d时a取最大值=>a<=1.587即a<=1.58*/

    int A,B,C,D;

    for(A=3;A<=158;A++)
    {
        for(B=A;B<=666;B++)
        {
            for(C=B;C<1000;C++)
            {
                if(A*B*C>1000000)
                {
                    if(1000000*(A+B+C)%(A*B*C-1000000)==0)
                    {
                        D=1000000*(A+B+C)/(A*B*C-1000000);
                        if(A+B+C+D<=2000&&D>=C)
                        {
                            a=(double)A/100;
                            b=(double)B/100;
                            c=(double)C/100;
                            d=(double)D/100;
                            printf("%.2lf %.2lf %.2lf %.2lf\n",a,b,c,d);
                        }
                    }

                }
            }
        }
    }/*
    for(a=0.05;a<=1.58;a+=0.01)
    {
        for(b=a;b<=2.11;b+=0.01)
        {
            for(c=b;c<10;c+=0.01)
            {
                d=(a+b+c)/(a*b*c-1);
                if(d-c>1E-7&&d-20<1E-7&&a+b+c+d-20<1E-7&&a+b+c+d-a*b*c*d<1E-7)
                    printf("%.2lf %.2lf %.2lf %.2lf\n",a,b,c,d);
            }
        }
    }*/
    return 0;
}

