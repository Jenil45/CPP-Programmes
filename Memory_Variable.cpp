#include<iostream>
using namespace std;

/* I learn about Type of modifier here
1) signed datatype = which has sign
2) unsigned datatype = which didn't have a sign
3) long datatype = we can increase memory of that datatype ,,,,,, memory = 8byte 
4) short datatype = we can decrease memory of that datatype ,,,,, memory = 2byte
*/ 

int main()
{
    int a;  // variable declaration as integer
    a=12;   // variable initialization

    cout<<"size of int"<<sizeof(a)<<endl;  

    float b;
    cout<<"size of float"<<sizeof(b)<<endl;

    char c;
    cout<<"size of char"<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool"<<sizeof(d)<<endl;

    short int si;
    long int li;

    cout<<"size of shortint"<<sizeof(si)<<endl;
    cout<<"size of longint"<<sizeof(li)<<endl;

    return 0;
}
