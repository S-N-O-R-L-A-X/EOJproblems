#include <iostream>

using namespace std;

/*0 1  1  1
    2  3  4
    6  9  13
    19 28 41

0 1 1 1 2 3 4 6 9 13 19 28 41
when it was born,it was the first year.
so the real round is 3.(though I thought it incorrect.)

*/
int main()
{
    int cow[51]={0,1,1,1};
    for(int i=4;i<=50;i++)
        cow[i]=cow[i-1]+cow[i-3];
    int n;
    while(cin>>n&&n!=0)
        cout<<cow[n]<<endl;
    return 0;
}
