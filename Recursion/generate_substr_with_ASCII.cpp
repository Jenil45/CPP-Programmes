#include<iostream>
#include<string>
using namespace std;
//RECURSION
//GENERATE SUBSTRING OF GIVEN STRING WITH ASCII NUMBER

void asciisubstr(string s , string ans)
{
    if (s.length() == 0)
    {
        cout<<ans<<endl;
    }
    
    char ch = s[0];
    int code = s[0];
    string ros = s.substr(1);

    asciisubstr(ros , ans);
    asciisubstr(ros , ans + ch);
    asciisubstr(ros , ans + to_string(code)); 
} 

int main()
{
    asciisubstr("AB" , "");
    return 0;
}
