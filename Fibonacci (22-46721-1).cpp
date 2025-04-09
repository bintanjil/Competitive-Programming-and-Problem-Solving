#include <iostream>
using namespace std;
int main ()

{
    int size;
    cout<<"Enter the size of fibonacci series:";
    cin>>size;
   int Fibonacci[size],i;
   Fibonacci[0]=0;
   Fibonacci[1]=1;
   for(i=2;i<size;i++){
    Fibonacci[i]=Fibonacci[i-2]+ Fibonacci[i-1];
    cout<<Fibonacci[i];
   }
    for(i=0;i<size; ++i){
        cout<< "Fbonacci["<<i<<"]="<<Fibonacci[i]<<endl;
    }

   return 0;








}
