#include<iostream>             // CHECK IF A GIVEN NUMBER IS ARMSTRONG NUMBER OR NOT
#include<cmath>
using namespace std;

/* ARMSTRONG NUMBER EXAMPLE:
    153 = addition of all digit cube = (1)^3 + (5)^3 + (3)^3 = 153
  
*/

int main()
{
    int n;
    cout<<"Enter the number n :";
    cin>>n;

    int sum=0;
    int original = n;
    while (n>0)
    {
        int lastdigit = n%10;
        sum = sum + pow(lastdigit , 3);          // pow() function is use to find cube of a number
        n = n/10; 
    }
    if (sum==original)
    {
        cout<<"The number n is an ARMSTRONG number";
    }
    else
    {
        cout<<"The number n is not an ARMSTRONG number";
        
    }
    
    return 0;
}
