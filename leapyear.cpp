#include <iostream>
using namespace std;

int main ()

{

    int year;

    cout<<"Enter any year:";
    cin>>year;


    if(year %4==0 &&    year%100!= 0)
    {
        cout<<"leapyear";
    }


    else if (year%400==0)
    {
        cout<<" leapyear";
    }
    else {


        cout<<"not leapyear";
    }






    return 0;








}
