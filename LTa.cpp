#include <iostream>
using namespace std;
int main ()
{
    int size;
    cout<<"Enter the size of fib series:";
    cin>>size;
    int Fibonacci[size], i;
    Fibonacci[0]=0;
    Fibonacci[1]=1;
    for(i=2;i<size; ++i){


             Fibonacci[i]=Fibonacci[i-2]+Fibonacci[i-1];

    }for(i=0;i<size;++i){

    cout<<"Fibonacci["<<i<<"]="<<Fibonacci[i]<<endl;

    }
   return 0;
}
