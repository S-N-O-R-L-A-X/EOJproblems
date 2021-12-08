// 1165.cpp : 此文件包含"main" 函数。程序执行将在此处开始并结束。
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char MorseNum[10][7] = { "-----",".----","..---","...--","....-",".....",".....","-....","--...","---..","----."};
char MorseAlpha[26][5] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..- ","-.--","--.." };

int indexNum(char str[]);
int indexAlpha(char str[]);

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char str[1001];
        gets(str);
        char ans[500];
        char alpha[6];
        int j = 0,k=0,p=0;
        while (str[j])
        {
            while (str[j] == '.' || str[j] == '-')
                        alpha[k++] = str[j++];
            alpha[k] = '\0';
            if (strlen(str) == 5)
                ans[p++] = indexNum(alpha);
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

int indexNum(char str[])
{
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(str, MorseNum[i])==0)
            return i;
    }
}

int indexAlpha(char str[])
{
    for (int i = 0; i < 26; i++)
    {
        if (strcmp(str, MorseAlpha[i] )== 0)
            return i;
    }
}

// 运行程序: Ctrl + F5 或调试 >"开始执行(不调试)"菜单
// 调试程序: F5 或调试 >"开始调试"菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到"项目">"添加新项"以创建新的代码文件，或转到"项目">"添加现有项"以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到"文件">"打开">"项目"并选择 .sln 文件
