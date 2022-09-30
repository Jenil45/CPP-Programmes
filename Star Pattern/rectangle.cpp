/* Pattern questions problem 1 is ..........
 1) RECTANGLE PATTERN
    ****
    ****
    ****               ROWS : 5
    ****               COLUMNS : 4
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
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}
