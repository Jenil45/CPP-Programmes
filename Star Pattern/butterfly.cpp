/* Pattern questions problem 7 is ..........
 7) HOLLOW RECTANGLE PATTERN
    for n=4,.....................
    
    *             *
    * *         * *
    * * *     * * *
    * * * * * * * *
    * * * * * * * *
    * * *     * * *
    * *         * *
    *             *
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"The number of n is:";
    cin>>n;
    
    // first we see upper part of this pattern
    /*
      for this we have to move the row from 1 to n
      no. of * = no. of rows
      no. of spaces = 2(n) - 2(no.of rows)
    */

   for (int i = 1; i <= n; i++)
   {
       for (int j = 1; j <= i ; j++)
       {
           cout<<"*";
       }
       
       int space = 2*n - 2*i;
       
       for (int j = 1; j <= space; j++)
       {
           cout<<" ";
       }
       
        for (int j = 1; j <= i ; j++)
       {
           cout<<"*";
       }
       cout<<"\n";
   }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for (int j = 1; j <= space; j++)
        {
            cout<<" ";
        }
          for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
            cout<<"\n";
    }
    

    return 0;
}
