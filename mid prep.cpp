#include<iostream>
using namespace std;

int main()
{
cout<<"Please enter your choice"<<endl;

 int n;
cin>> n;

 switch(n)
{
case 1:
{
cout<<"code is executed"<<endl;
int p;
cin>>p;
int x = p+1;
//cout<<x%2<<endl;
if(x == 4)
{
cout<<"is even"<<endl;
}
else
{
cout<<"is odd"<<endl;
}
break;
}
case 0:
cout<<"code is not executed"<<endl;
break;
default:
cout<<"Invalid input"<<endl;
break;
}
}
