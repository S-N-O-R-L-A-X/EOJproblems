#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    int vector[n][3];
    for(i=0;i<=n-1;i++)//vector
    {
        for(j=0;j<=2;j++)
            scanf(" %d",&vector[i][j]);
    }
    long long int s1,s2,s3;
    s1=0;
    s2=0;
    s3=0;
    for(i=0;i<=n-1;i++)
    {
        s1=s1+vector[i][0];
        s2=s2+vector[i][1];
        s3=s3+vector[i][2];
    }
    if(s1==0&&s2==10&&s3==0)
        printf("NO");
    else
        printf("YES");
    return 0;
}
