#include<iostream>
using namespace std;
//Sieve of eratosthhenes
//This is an better approach to find prime number between 1 and given range
//In this method we have to marks all divisible element and remain unmarked elements are prime

void primeSieve(int n)
{
    int prime[100] = {0};

    for (int i = 2; i <= n; i++)
    {
         if (prime[i] == 0)
         {
            for (int j = i*i; j <= n; j+=i)                       //algorithm for marke divisible element
            {
                prime[j] = 1;
            }
            
         }
         
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout<<i<<" ";                                         //print all unmarked elemnts
        }
        
    }cout<<endl;
    
    
}
int main()
{
    int n;
    cin>>n;
  
    primeSieve(n);
    return 0;
}
