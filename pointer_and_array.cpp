#include<iostream>
using namespace std;
//Basics of POINTERS and ARRAY

int main()
{
    int arr[] = {10 , 20 , 30};
    cout<<*arr<<endl;                         //10            (we can't modified array with different operation)

    int *ptr = arr;                          //arr stores adress of  0th element
    
    //print whole array using pointer

    for (int i = 0; i < 3; i++)
    {
        cout<<*ptr<<endl;
        ptr++;                                 //Increament in adress of 0th element by 4 byte so gave us further 20 and 30
    }

    //print whole array by using increament in array

    for (int i = 0; i < 3; i++)
    {
        cout<<*(arr+i)<<endl;                   // *(arr+i) is equivalent to arr[i] && (arr+i) is adress of element i
                                
        // arr++ is not valid
    }
   
}
