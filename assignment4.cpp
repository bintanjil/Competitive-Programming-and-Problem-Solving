#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter how many number you wanna take?";
    cin>>x;
    int number[x];
    int countEven=0;
    int countOdd=0;
    cout<<"Enter the numbers:";
    for(int i=0;i<x;i++)
    {
        cin>>number[i];
    }
    for(int i=0;i<x;i++)
    {
        if(number[i]%2==0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }
    cout<<"Total number of even taken is:"<<countEven<<endl;
    cout<<"Total number of odd taken is :"<<countOdd<<endl;









    return 0;

























}

