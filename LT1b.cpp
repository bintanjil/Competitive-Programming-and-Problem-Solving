#include<iostream>
using namespace std;

int main()
{

int num;
int sum=0;
cout<<"Enter any number:";
cin>>num;
int i;
for (i =1; i<=num; i++)
{

   sum = sum +i;
   cout<<i;
   if (i<num)
    cout<<"+";
   else
    cout<<" ";


}
cout<<"="<<sum<<endl;



return 0;
}

