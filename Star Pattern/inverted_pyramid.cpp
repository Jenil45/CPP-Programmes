/* Pattern questions problem 3 is ..........
 3) INVERTED HALF PYRAMID
  here we have to make like this for n=5
  *****
  ****
  ***
  **
  *
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"The value of rows and column is:";
    cin>>n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";        
        }
        cout<<"\n";
    }
    
    return 0;
}
