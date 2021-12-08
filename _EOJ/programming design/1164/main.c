#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int m;
        scanf(" %d",&m);
        getchar();
        char str[2001];
        int p,j,k,l,start;
        gets(str);
        int len=strlen(str);
        printf("case #%d:\n",i);
        int cnt=0,wordLen=0,space;
        for(j=0;str[j]==' ';j++);//skip spaces at beginning
        while(j<len)
        {
            start=j;   //start shows the place of the first word every line
            wordLen=0;//wordLen means the sum of the length of words in that line
            cnt=0;//count how many words

            for(;wordLen+cnt<=m&&j<len;)//check whether a line is full
            {
                for(l=0,p=j;str[p]!=' '&&p<len;p++,l++);//j cannot++ because in the next round j still needs to be assigned to start
                //scan the word and gets its length and stores it in l
                if(wordLen+cnt+l<=m)//
                {
                    wordLen+=l;//wordLen means the sum of the length of words in that line
                    cnt++;//count how many words
                    for(j=p;str[j]==' ';j++);//skip spaces and find next word
                }
                else
                    break;
            }

            space=m-wordLen;//calculate how many spaces are needed this line
            //prepare to output
            k=start;
            cnt--;//cnt words have (cnt-1) vacancy

            while(k<j)
            {
                while(str[k]!=' '&&k<len)
                    putchar(str[k++]);  //output a word
                while(str[k]==' '&&k<len)
                    k++;   //skip spaces
                if(j==len&&cnt)//the last line
                    putchar(' ');
                else//the former lines
                {
                    for(p=0;cnt&&p<space/cnt;p++)
                        putchar(' ');
                    space-=p;
                }
                cnt--;
            }
            printf("\n");
        }
    }
    return 0;
}

/*
reference:
Since you don't know how many lines the string will output,you
can only deal with the string line by line
*/
