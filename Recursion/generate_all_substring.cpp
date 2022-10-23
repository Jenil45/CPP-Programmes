#include<iostream>
#include<string>
using namespace std;
//RECURSION
//GENERATE ALL SUBSTRING OF A STRING

void substring(string s , string ans)
{
    if (s.length() == 0)
    {
        cout<<ans<<endl;
    }
   
    char ch = s[0];
    string ros = s.substr(1);

    // substring(ros , ans);
    substring(ros , ans+ch);
     
}
int main()
{
    substring("ABC" , "");
    return 0;
}
