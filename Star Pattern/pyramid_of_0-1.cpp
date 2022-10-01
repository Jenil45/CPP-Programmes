// ADVANCE PATTERN QUESTION 2
/*
2) 0-1pattern

for n=5
1
0 1                                   ROWS : 1 to n
1 0 1                                 COLUMNS : 1 to row no.
0 1 0 1                               ELEMENTS : 1 at i+j = even no....,,...0 at i+j = odd no.
1 0 1 0 1

*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i+j)%2==0)
            {
                cout<<"1"<<" ";
            }
            else
            {
                cout<<"0"<<" ";
            }
            
        }
        cout<<"\n";
    }
    
    return 0;
}
