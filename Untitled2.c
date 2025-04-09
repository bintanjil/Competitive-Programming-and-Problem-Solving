#include<iostream>
using namespace std;

class Shape{
protected:
    float wheel; float fuel;
public:
    car()
    {
        cout<<"Empty cons car"<<endl;
    }
    car(int w, float f)
    {
        wheel = w;
        fuel = f;   // setting the data
        cout<<"Parameterized of car"<<endl;
    }

    void showData()
    {
        cout<<"Wheel:"<<wheel<<"Fuel in liter :"<<fuel<<endl;
    }
};

class volvo : public car
{
   public:
       volvo()
       {
           cout<<"Empty cons of volvo"<<endl;
       }
       volvo (int x, float y): car(x,y)
       {
           cout<<"parameterized of volvo"<<endl;
       }
};

class toyota : public volvo
{
   public:
       toyota()
       {
           cout<<"Empty cons of toyota"<<endl;
       }
       toyota (int x, float y): volvo(x,y)
       {
           cout<<"parameterized of toyota"<<endl;
       }
};



int main()
{
   car c;
   volvo v;
   toyota t;
   car c1(2,2.3);
   c1.showData();
   volvo v1(3,2.9);
   v1.showData();
   toyota t1(4,5.8);
   t1.showData();
}
