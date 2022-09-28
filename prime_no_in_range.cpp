#include<iostream>                  // Print all number between a and b
using namespace std;

int main()
{
    int a,b;

    cout<<"The value of a is"<<endl;
    cin>>a;

    cout<<"The value of b is"<<endl;
    cin>>b;
    // Here we use nested for loop

    for (int i = a; i <= b; i++)
    {
        int j;
        for ( j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                break;                     // Here the number was non prime than we have to skip that one
            }   
            
        }
        if (j==i)
        {
            cout<<i<<endl;
        }
        
    }
    
    return 0;
}
