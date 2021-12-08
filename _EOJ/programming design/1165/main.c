#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char MorseNum[10][6] = {"-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};
char MorseAlpha[26][5] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

char indexNum(char str[]);
char indexAlpha(char str[]);

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    for (int i = 0; i < t; i++)
    {
        char str[1001];
        gets(str);
        char ans[500];
        char alpha[6];
        int j=0,p=0;
        while (str[j])
        {
            int k=0;
            while (str[j] == '.' || str[j] == '-')
                alpha[k++] = str[j++];
            alpha[k] = '\0';
            if (strlen(alpha) == 5)
                ans[p++] = indexNum(alpha);
            else if(strlen(alpha)==0)
                p=p;
            else
                ans[p++] = indexAlpha(alpha);

            int cnt = 0;
            while (str[j]=='/')
            {
                j++;
                cnt++;
            }
            if (cnt == 5)
                ans[p++] = '.';
            else if (cnt == 3)
                ans[p++] = ' ';
        }
        ans[p] = '\0';
        printf("case #%d:\n%s\n", i,ans);

    }

}

char indexNum(char str[])
{
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(str, MorseNum[i])==0)
            return i+'0';
    }
}

char indexAlpha(char str[])
{
    for (int i = 0; i < 26; i++)
    {
        if (strcmp(str, MorseAlpha[i] )== 0)
            return i+'A';
    }
}
