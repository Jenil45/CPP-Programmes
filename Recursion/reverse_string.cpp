#include<iostream>
#include<string>
using namespace std;
//RECURSION
//Reverse a string using a recursion

void reverse(string s)
{
    if (s.length() == 0)
    {
         return;                    //We pass here substring with one elemnt decraesing so when length of string becomes 0 then return
    }

    string ros = s.substr(1);
    
    reverse(ros);                             //First we call a function
    cout<<s[0];                               //Then we print an elemnt of a string by this string wil reverse
}

int main()
{
reverse("binod");
    return 0;
}
