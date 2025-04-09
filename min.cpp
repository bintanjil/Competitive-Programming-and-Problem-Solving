#include <iostream>
using namespace std;
int main()
{

    int z, number[z];
    cout<<"please enter the size of the array you want to check:";
    cin>>z;

    for(int i=0;i<z;i++)
    {
        cin>>number[i];
    }
    int minimum=number[0];
    for(int i=0;i<z;i++)
    {
        if(minimum>number[i])
            minimum=number[i];

    }
    cout<<"The minimum value of the array is :"<<minimum<<endl;


























    return 0;
}
