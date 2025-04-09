#include<iostream>
#define pi 3.1416
using namespace std;



int main()
{
int arr[5] = {1,3,5,7,9};



cout<<"Please declare the size of array"<<endl;
int size;
cin>>size;
cout<<"Elements in the array are"<<endl;
int arr2[size];



for(int i=0; i<size; i++)
{
cin>>arr2[i];
}
cout<<"The last index element"<<endl;
cout<<arr2[size -1]<<endl;
cout<<"The first index element"<<endl;
cout<<arr2[0]<<endl;



cout<<"Elements printed"<<endl;



for(int i=0; i<size; i++)
{
cout<<"arr "<<i<<" = "<<arr2[i]<<endl;
}



}
