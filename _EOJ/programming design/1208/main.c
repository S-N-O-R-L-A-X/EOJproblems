#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define maxsize 61

void createPassword(char password[],char str[]);
int index(char password[],char ch);

int main()
{
    int t,i,j,k;

    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        char password[63]={"###############################################################################################################################"};
        char str[maxsize];
        gets(str);
        double sum=0;
        createPassword(password,str);
        int num=strlen(password);//x system of numeration

        long long out=(long long)index(password,str[0]);
        for(j=1;j<strlen(str);j++)
        {
            int a=index(password,str[j]);
            out=a+out*num;
        }
        printf("case #%d:\n%lld\n",i,out);
    }

    return 0;
}

void createPassword(char password[],char str[])
{
    int end=0;
    for(int i=0;i<strlen(str);i++)
    {
        int flag=1;
        for(int j=0;j<=end;j++)
        {
            if(password[j]==str[i])
            {
                flag=0;
                break;
            }
        }
        if(flag)
            password[end++]=str[i];
    }
    char temp=password[1];
    password[1]=password[0];
    password[0]=temp;
    if(end==1)
        password[2]='\0';
    else
        password[end]='\0';

}

int index(char password[],char ch)
{
    for(int i=0;i<strlen(password);i++)
    {
        if(password[i]==ch)
            return i;
    }
}
