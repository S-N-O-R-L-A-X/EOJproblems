#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int t,i,j,len;
    int password[9];
    scanf("%d",&t);getchar();
    char str[21];
    for(i=0;i<=t-1;i++)
    {
        int Z,O,N,W,H,F,U,S,X,G;
        Z=0;O=0;N=0;W=0;H=0;F=0;U=0;S=0;X=0;G=0;
        gets(str);
        len=strlen(str);
        for(j=0;j<=len-1;j++)
        {
            switch(str[j])
            {
                case 'Z':Z++;break;
                case 'O':O++;break;
                case 'W':W++;break;
                case 'N':N++;break;
                case 'H':H++;break;
                case 'F':F++;break;
                case 'U':U++;break;
                case 'S':S++;break;
                case 'X':X++;break;
                case 'G':G++;break;
                default:break;
            }
        }
        printf("case #%d:\n",i);
        for(j=1;j<=Z;j++)
            printf("0");
        for(j=1;j<=O-Z-W-U;j++)
            printf("1");
        for(j=1;j<=W;j++)
            printf("2");
        for(j=1;j<=H-G;j++)
            printf("3");
        for(j=1;j<=U;j++)
            printf("4");
        for(j=1;j<=F-U;j++)
            printf("5");
        for(j=1;j<=X;j++)
            printf("6");
        for(j=1;j<=S-X;j++)
            printf("7");
        for(j=1;j<=G;j++)
            printf("8");
        for(j=1;j<=(N-O+Z+W+U-S+X)/2;j++)
            printf("9");
        printf("\n");
    }
    return 0;
}
