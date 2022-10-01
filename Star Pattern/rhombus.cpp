// ADVANCE PATTERN QUESTION 3
/*
2) RHOMBUS PATTERN for n=5

    _-_-* * * * *                               ROWS : 1 to n
    _-_* * * * *                                COLUMNS : 8
    _-* * * * *                                 SPACE : n-row    (for loop)
    _* * * * *                                  *     : 1 to n   (for loop)
    * * * * *                                  
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }

        for (int j = 1; j <= n; j++)
        {
            cout<<"*"<<" ";
        }
        
        cout<<"\n";
    }
    
    return 0;
}
