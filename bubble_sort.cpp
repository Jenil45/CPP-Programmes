#include<iostream>
using namespace std;
// Here we write programme on bubble sorting
//In bubble sorting we compare each consecutive element respectively


int main()
{
   int n;
   cin>>n;

   int arr[n];

   for (int  i = 0; i < n; i++)
   {
       cin>>arr[i];
   }

   cout<<"The array before sorting"<<endl;

   for (int  i = 0; i < n; i++)
   {
       cout<<arr[i];
   }

   int counter = 1;                                       //for (n-i)  iteration

   while (counter<n)
   {
       for (int i = 0; i < n-counter ; i++)               // iteration process begins from here
       {
           if (arr[i]>arr[i+1])
           {
               int temp = arr[i+1];                        // swapping
               arr[i+1] = arr[i];
               arr[i]   = temp;
           }
       }
       counter++;
   }
   cout<<"\n";
   cout<<"The array after bubble sorting";
  for (int i = 0; i < n; i++)
  {
      cout<<arr[i]<<" ";

  }
   
 return 0;  
}
