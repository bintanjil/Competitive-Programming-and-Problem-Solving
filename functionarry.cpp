#include <iostream>
using namespace std;
int fun(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {

        cout<<arr[i]<<endl;

    }

}
int main()
{
   int myarray[5]={4,5,6,7,8};
   fun(myarray,5);
}
