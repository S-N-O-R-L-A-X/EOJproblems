#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    double amount;
    char unit[100];
    double std;
    char name[100];
}intake;

int main()
{
    int i,j,k;
    int x;
    intake list[100];
    int temp[100];
    j=0;
    for(i=0;i<=99;i++)
    {
        scanf("%lf %s %lf",&list[i].amount,&list[i].unit,&list[i].std);
        getchar();
        gets(list[i].name);
        if(list[i].amount<0)
            break;
        x = (list[i].amount / list[i].std) * 100;
        if(x >= 1)
        {
            x = round((list[i].amount / list[i].std) * 100);
            printf("%s %.1lf %s %d%%\n",list[i].name,list[i].amount,list[i].unit,x);
        }
        else
        {
            temp[j]=i;
            j++;
        }

    }
    printf("Provides no significant amount of:\n");
    for(i=0;i<=j-1;i++)
    {
        k=temp[i];
        printf("%s\n",list[k].name);
    }

    return 0;
}
