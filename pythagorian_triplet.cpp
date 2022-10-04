#include<iostream>                   // 2) Check the paythagorian triplet 
#include<cmath>
using namespace std;

bool check(int a ,int b, int c)
{
   int x = max(a ,max(b , c));
   int y,z;

   if (x==a)
   {
       y=b;
       z=c;
   }

   else if (x==b)
   {
       y=a;
       z=c;
   }
   else
   {
       y=a;
       z=b;
   }
   
   if ((x*x) == (y*y)+(z*z))
   {
       return true;
   }
   else
   {
       return false;
   }
   
   

}
int main()
{
    int a,b,c;
    cout<<"Enter the 3 number that you want to check paythagorian triplet or not:";
    cin>>a>>b>>c;
 
    if (check(a,b,c))
    {
        cout<<"Pythagorean triplet";
    }

    else
    {
        cout<<"Not a pythagorian triplet";
    }
    
    return 0;
}