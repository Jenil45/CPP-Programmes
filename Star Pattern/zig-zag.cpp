// ADVANCE PATTERN QUESTION 7
/*
7) ZIG-ZAG PATTERN for n=9

    *       *                   ROWS : 1 to 3 fix
  *   *   *   *                 COLUMN   (i+j)%4 == 0  * print and for R=2 id j%4==0 then also * print
*       *       *

*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (((i+j)%4==0) || (i==2 && j%4==0))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }

      
        cout<<"\n";
    }
    
    return 0;
}
