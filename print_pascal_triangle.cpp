#include<iostream>
#include<cmath>
using namespace std;

/*   PASCAL TRIANGLE using function
   
    1           // oCo
    1 1         // 1Co 1C1                                      ROWS = i & COLUMNS = j
    1 2 1       // 2Co 2C1 2C2                                  every term = t(ij) = iCj
    1 3 3 1     // 3Co 3C1 3C2 3C3
    1 4 6 4 1   // 4Co 4C1 4C2 4C3 4C4
*/

int fact(int n){

    int factorial =1 ;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial*i;
    }
    return factorial;
}

int main()
{
    int n;
    cout<<"Enter the number n for that you want pascal's triangle:";
    cin>>n;
    cout<<"The pascal's triangle is following :\n"; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
             cout<< fact(i)/(fact(i-j)*fact(j))<<" ";
        }
     cout<<"\n";   
    }
    
    return 0;
}
