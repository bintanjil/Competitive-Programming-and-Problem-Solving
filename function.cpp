#include <iostream>
using namespace std;
int sum(int a,int b)
{

  cout<<a+b<<endl;;
}



int sub(int a,int b)
{

  cout<<a-b<<endl;
}
int mul(int a,int b)
{

  cout<<a*b<<endl;
}
double div(int a,int b)
{

  double result=(double)a/b;
  cout<<result<<endl;
}






int main()
{
    sum(40,12);
    sub(40,12);
    mul(40,12);
    div(40,12);
}

