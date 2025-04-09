#include <iostream>
using namespace std;
int main ()
{
    int size;
    cout<<"Enter the size of the arrray:";
    cin>>size;


    cout<<"Enter the elements of the array:"<<endl;
    int arr[size];


    for(int i=0;i<size;i++)
    {
        cin>>arr[i];


    }
      cout<<"Printed elements in reverse order:"<<endl;



    for(int i=size-1; i>=0; i--)
    {
        cout<<arr[i]<<endl;
    }

   return 0;
}
