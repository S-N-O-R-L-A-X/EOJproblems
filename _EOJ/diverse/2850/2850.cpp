#include <iostream>
#include <stdio.h>
using namespace std;

/*

2009 366 1 leap year
2010 365 1 leap year 1 common year 
2011 365 1 leap tear 2 common year
2012 365 1 leap year 3 common year
*/


int main()
{
	int x;
	while (1)
	{
		cin >> x;
		char ch=cin.get();
		int delta = x - 2005;//base is 2005
		int cntLeap = delta / 4;
		int cntCommon = x - 2008 - cntLeap;
		//int first = (cntLeap * 366 + cntCommon * 365)%7;//the delta between 2008.2.1
		int first = (cntLeap * 366 + cntCommon * 365 + 5) % 7;//friday
		int cnt = 1;
		int end = (x % 4==0)?29:28;
		if (x % 100 == 0 && x % 400 != 0)
			end = 28;
		cout << " SU MO TU WE TH FR SA" << endl;
		
		for (int i = 0; i <first; i++)
			printf("   ");//first 0=>2 1=>5 2=>8 
		int flag = first;
		for (cnt = 1; cnt <= end; cnt++)
		{
			printf(" %2d",cnt);
			flag++;
			if (flag == 7&&cnt!=end)
			{
				printf("\n");
				flag = 0;
			}
		}
		printf("\n\n");
		if (ch == '\n')
			break;
	}
	
}
