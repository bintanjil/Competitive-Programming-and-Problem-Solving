#include <iostream>
using namespace std;
int main ()
{

    int arr[9]= {12,18,19,15,3,17,21,31,23};
    int i;


    int maximum;
    maximum=arr[0];
   for(i=0;i<9;i++){
    if(maximum<arr[i])
   {

    maximum=arr[i];}

   }


   cout<<"The maximum value is:"<<maximum<<endl;



 return 0;
}

