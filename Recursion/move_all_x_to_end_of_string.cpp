#include<iostream>
#include<string>
using namespace std;
//RECURSION
//MOVE ALL X TO END OF A STRING USING RECURSION

string movextoend(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = movextoend(s.substr(1));

    if (ch == 'x')
    {
        return ans+ch;
    }

    return ch+ans;
    
    
}
int main()
{ 
    cout<<movextoend("xxfgffccccxxxxghg");
    return 0;
}
