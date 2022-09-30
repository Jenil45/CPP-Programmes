/* Pattern questions problem 2 is ..........
 2) HOLLOW RECTANGLE PATTERN
    ****
    *  *
    *  *               ROWS : 5
    *  *               COLUMNS : 4
    ****
*/

#include<iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout<<"The no. of rows are :";
    cin>>rows;

  cout<<"The no. of columns are :";
    cin>>columns;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (i==0 || (i==rows-1))
            {
                cout<<"*";
            }
            else if (j==0 || j==(columns-1))
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
