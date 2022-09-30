/* Pattern questions problem 3 is ..........
 3) HALF PYRAMID AFTER 180 ROTATION

  here we have to make like this for n=5
      *
     **
    ***
   ****
  *****
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
        for (int j = 1; j <=n; j++)
        {
            if (j<=n-i)
            {
                cout<<" ";
            }

            else
            {
                cout<<"*";
            }
                    
        }
        cout<<"\n";
    }
    
    return 0;
}
