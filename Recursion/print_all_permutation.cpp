#include<iostream>
#include<string>
using namespace std;
//RECURSION
//PRINT ALL PERMUTATION OF GIVEN STRING

void permutation(string s , string ans)
{
   if (s.length() == 0)
   {
       cout<<ans<<endl;
       return ;
   }
   
   for (int i = 0; i < s.length(); i++)
   {
       char ch = s[i];
       string ros = s.substr(0 , i) + s.substr(i+1);             // (i+1) is given a starting point 

       permutation(ros , ans + ch);
   }
   
}

int main()
{
    permutation("ABC" , "");
    return 0;
}
