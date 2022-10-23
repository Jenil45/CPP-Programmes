//RECURSION
//Remove all duplicates which are one after one
#include<iostream>
#include<string>
using namespace std;

string duplicates(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ros = duplicates(s.substr(1));s

    if (ch == ros[0])
    {
        return ros;
    }

    return (ch + ros);
}

int main()
{
    cout<<duplicates("aaaghnnjnnndaaj");
    return 0;
}
