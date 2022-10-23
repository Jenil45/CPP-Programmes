#include<iostream>
#include<string>
using namespace std;
//RECURSION
//FORM WORDS FROM ALL MOBILE NUMBER DIGITS

string keypadARR[] = {"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqr" , "stu" , "wxyz"};

void keypad(string s , string ans)
{
    if (s.length() == 0)
    {
        cout<<ans<<endl;
    }

    char ch = s[0];
    string code = keypadARR[ch - '0'];           //convert in integer

    string ros = s.substr(1);

    for (int i = 0; i < code.length(); i++)
    {
        keypad(ros , ans+code[i]);
    }
}

int main()
{
    keypad("23" , "");
    return 0;
}
