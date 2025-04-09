#include <iostream>
using namespace std;
class Complex
{
protected:
    int real; int imaginary;
public:

    void setData(int a, int b)
    {
        real=a;
        imaginary=b;
    }
    void getData()
    {
        cout<<"The real part is:"<<real;
        cout<<endl;
        cout<<"The imaginary part is:"<<imaginary;
        cout<<endl;

    }


};
int main()
{
   // Complex c;
    Complex *ptr=new Complex;
    ptr->setData(3,33);
    ptr->getData();
    //c.setData(44,55);
    //c.getData();
}







