// ADVANCE PATTERN QUESTION 1
/*
1) INVERTED PATTERN for n=5

1 2 3 4 5                        NO.ROWS : 1 to n
1 2 3 4                          NO.COLUMNS : n + 1 -i
1 2 3                            ELEMENTS = COLUMN NO.
1 2
1

*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n+1-i; j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}
