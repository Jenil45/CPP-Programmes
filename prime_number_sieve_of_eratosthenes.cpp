#include<iostream>
using namespace std;
//Prime factors of a number using sive of eratosthenes method

void primefactor(int n)
{
    int spf[100] = {0};
    for (int i = 2 ; i <= n; i++)                    
    {
        spf[i] = i;                                  //we denote smallest prime factor of i number is i
    }

    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)                           
        {
           for (int j = i*i; j <= n; j+=i)
           {
               if (spf[j] == j)                     // if there is i=3 and j=12 so we denote spf[12] = 2 fisrt for i=2
               {
                   spf[j] = i;
               }
               
           }
           
        }
        
    }
    
    while (n != 1)
    {
        cout<<spf[n]<<" ";
        n = n/spf[n];
    }
    
    
}
int main()
{
    int n;
    cin>>n;
    primefactor(n);
    return 0;
}
