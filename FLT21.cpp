#include <iostream>
using namespace std;

class Triangle
{
private:
    float base;
    float height;
public:
    void setData(float B,float H)
    {
        base=B;
        height=H;
    }
    float getData()
    {
        return 0.5*base*height;
    }
};
int main()
{
    Triangle area;
    area.setData(20.4,10.5);
    cout<<"The area of triangle is:"<<area.getData();
}

