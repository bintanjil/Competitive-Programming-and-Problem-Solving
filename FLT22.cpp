#include <iostream>
using namespace std;
class Triangle
{
private:
    float heigth;
    float base;
public:
    Triangle()
    {
        cout<<"Default constructor is called"<<endl;
    }
    Triangle(float H,float B)
    {
        heigth=H;
        base=B;
    }
        void getData()
        {
            cout<<"Enter the value of height:";
            cin>>heigth;
            cout<<"Enter the value of base:";
            cin>>base;
        }
        float getArea()
        {
            return 0.5*heigth*base;
        }


};
int main()
{

    Triangle ar;

    ar.getData();

    cout<<"The area is:"<<ar.getArea();
}

