#include <iostream>
using namespace std;
int equationC(int k )
{
   int c=k-273;
   return c;
}
int main()
{
    int b;
    cout<<"Enter the value of temperature in kalvin:";
    cin>>b;
    cout<<equationC(b);
}

