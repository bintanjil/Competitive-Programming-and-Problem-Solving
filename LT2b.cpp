#include <iostream>
using namespace std;
int main()
{
    int size ;
    cout<<"Enter the size of the array:"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    int i;
    int sum=0;
    for (i=0;i<size ;i++)
    {
        sum=sum+array[i];
    }
    cout<<"The summation of the array is:"<<sum<<endl;






    return 0;




}
