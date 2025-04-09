#include<iostream>
using namespace std;
#define PI 3.1416   // as constant
int myArray[4] = {12,13,14,17};   // static array and it's global array
int main()
{
    //int myArray[4] = {12,13,14,17};   // static array

    for(int i=0; i<4; i++)
    {
        cout<<myArray[i]<<endl;
    }

    //int *dynamicArray = new int [5];  //dynamic memory created
    cout<<"Please enter the values of the dynamic array"<<endl;
    int n;
    cin>>n;
    int *dynamicArray = new int [n];
    cout<<"The values of input are:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>dynamicArray[i];

    }
    cout<<"input in reverse order "<<endl;

    for(int i=n-1; i>=0; i--)
    {
        cout<<dynamicArray[i]<<"\t";
    }

    delete dynamicArray;   // array deallocated
    cout<<endl;
    cout<<dynamicArray[0];
    cout<<endl;
    cout<<"The value of global constant pi is: "<<PI<<endl;

}
