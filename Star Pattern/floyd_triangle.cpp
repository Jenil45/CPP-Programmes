/* Pattern questions problem 6 is ..........
 6) FLOYD's TRIANGLE

  here we have to make like this for n=5
  1
  2  3
  4  5  6
  7  8  9  10
  11 12 13 14 15
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"The value of rows and column is:";
    cin>>n;
    int  count=1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<count<<" ";
            count++;        
        }
        cout<<"\n";
    }
    
    return 0;
}
