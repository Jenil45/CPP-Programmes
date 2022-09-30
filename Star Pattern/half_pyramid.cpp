/* Pattern questions problem 5 is ..........
 5) HALF PYRAMID USING NUMBER

  here we have to make like this for n=5
  
  1
  22
  333
  4444
  55555

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"The value of rows and column is:";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i;        
        }
        cout<<"\n";
    }
    
    return 0;
}
