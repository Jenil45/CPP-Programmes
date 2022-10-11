#include<iostream>
#include<string>
using namespace std;

//Different function of string

int main()
{
    string str;

    string s1 = "fam";
    string s2 = "ily";

    s1.append(s2);                                            //append s1 and s2
    cout<<s1<<endl;                                           //gives output family
    
    //or//

    string s3 = "cric";
    string s4 = "ket";    
    
    cout<< s3+s4 <<endl;                                        //output cricket
    cout<< s3[2] <<endl;                                        //output 2 index character of s3
    cout<< s3.at(2) <<endl;                                     //output 2 index character of s3
    
    string abc = "dghfguh kjkhuijguygui jklhjkhiohiuh";

    abc.clear();                                             //clear whole string abc
    cout<< abc <<endl;                                         //output blank

    s3.assign("ROHITMAN");                                   //Replace s3(cric) with ROHITMAN
    cout<< s3 <<endl;                                          // output ROHITMAN

    string s5 = "abc";
    string s6 = "xyz";

    cout<< s6.compare(s5) <<endl;                              //compare two strings (here this give 1 (+ve) output)
    //if s1=s2 than 0 and s1>s2 (-ve) output

    string s7 = "nincompoop";
    s7.erase(3 , 2);                                            //erase 3 index se 2 character
    cout<<s7<<endl;
    
    return 0;
}
