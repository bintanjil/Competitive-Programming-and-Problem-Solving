#include <iostream>
using namespace std;
int main ()
{
    int size;
    cout<<"Enter the size of the arrray:";
    cin>>size;


    cout<<"Enter the elements of the array:"<<endl;
    int arr[size];
    int i;

    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int maximum,minimum;
    maximum=arr[0];
    minimum=arr[0];
   for(i=0;i<size;i++){
    if(maximum<arr[i])
   {

    maximum=arr[i];}
                              
   }
   for(i=0;i<size;i++)
   {
      if(minimum>arr[i])
        minimum=arr[i];
   }

   cout<<"The maximum value is:"<<maximum<<endl;
   cout<<"The minimum value is :"<<minimum<<endl;


 return 0;
}
