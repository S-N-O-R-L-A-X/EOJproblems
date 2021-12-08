#include <iostream>
#include <stdio.h>
#include <stack>
#include <stdlib.h>

using namespace std;

double PrePolish()
{
    char str[10];
    double f1,f2;
    scanf("%s",str);
    switch(str[0])
    {
       case'+':{f1=PrePolish();f2=PrePolish();return f1+f2;}
       case'-':{f1=PrePolish();f2=PrePolish();return f1-f2;}
       case'*':{f1=PrePolish();f2=PrePolish();return f1*f2;}
       case'/':{f1=PrePolish();f2=PrePolish();return f1/f2;}
       default: return atof(str);
   }
}

void solve()
{
	printf("%.6lf\n", PrePolish());
}


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        printf("case #%d:\n",i);
        solve();
    }
    return 0;
}
