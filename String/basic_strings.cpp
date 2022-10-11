#include<iostream>
#include<string>
//Types of declaration of single string
using namespace std;

int main()
{

/*

//Way 1 to declare a string

    string str;                                    //declaration of string (str is name of string)

    cin>>str;
    cout<<"\n"<<str<<"\n";
  
//Way 2 to declare a string

    string str1(5 , 'n');                         //5 is the size of string and n is a character
    cout<<str1<<endl;;

//Way 3 to declare string

    string str2 = "arniesgym";
    cout<<str2<<endl;
*/
//.............................................................................................................................

//The code to write full sentence

   string str3;
   getline(cin , str3);                               //write full sentence
   cout<<str3<<endl;
    return 0;
}
