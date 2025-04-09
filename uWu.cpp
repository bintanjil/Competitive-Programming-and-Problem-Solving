#include <iostream>
using namespace std;
int main()
{

 int n;
cout<<"Enter the size:";
cin>>n;
int arr[n];
cout<<"Enter the elements:";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"Printed elements:"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
}


for(int i=n-1;i>=0;i--)
{
    cout<<arr[i]<<endl;
}

















}
