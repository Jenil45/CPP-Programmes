// ADVANCE PATTERN QUESTION 6
/*
6) STAR PATTERN for n=4

      *                 (DIVIDE INTO TWO PARTS)    FOR FIRST PART   ROWS : 1 to n
    * * *               (INTO COLUMN)              SPACE : 1 to n-i                     
  * * * * *                                        *     : 2i-1
* * * * * * *      
  * * * * *                                        FOR SECOND PART  ROWS : n to 1
    * * *                                                            AS IT IS
      *    
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

        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<"*";
        }
        
        //  for (int j = 1; j <= n-i; j++)
        // {
        //     cout<<" ";
        // }
        cout<<"\n";
    }
    
      for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }

        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<"*";
        }
        
        //  for (int j = 1; j <= n-i; j++)
        // {
        //     cout<<" ";
        // }
        cout<<"\n";
    }
    return 0;
}
