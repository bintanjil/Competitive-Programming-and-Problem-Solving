#include<iostream>
using namespace std;

class Shape{
protected:
   float length;

public:
    Shape()
    {
        cout<<"Empty constructor for shape"<<endl;
    }
    Shape(float L)
    {
        length=L;

        cout<<"Parameterized constructor for shape"<<endl;
    }
    void showdetails()
    {
        cout<<"Length of the shape="<<length<<endl;


    }
    ~Shape()
    {
        cout<<"Destructor is called for shape"<<endl;
    }

};
class Triangle : public Shape {

    protected:
        float base;
        public:
    Triangle()
    {
        cout<<"Empty constructor for triangle"<<endl;
    }
    Triangle(float B,float Height):Shape(Height)
    {
        base=B;
        cout<<"Parameterized constructor for triangle"<<endl;
    }
    float TriangleArea()
    {
        return 0.5*length*base;
    }
    ~Triangle()
    {
         cout<<"Destructor is called for triangle"<<endl;
    }


} ;

class Square : public Shape{
    public:

    Square()
    {
        cout<<"Empty constructor for Square"<<endl;
    }
    Square(float lt) : Shape(lt)
    {
        cout<<"Parameterized constructor for square."<<endl;
    }
    float SquareArea()
    {
        return length*length;
    }
    ~Square()
    {
         cout<<"Destructor is called for square"<<endl;
    }

};


int main()
{
    Shape s;
    Shape s1(3.5);
    s1.showdetails();
    Triangle T;
    Square Sq;
    Triangle T1(2.4,2.9);
    T1.showdetails();
   cout<<"The area of triangle is:"<< T1.TriangleArea()<<endl;
    Square sq1(3.8);
    sq1.showdetails();
    cout<<"The area of square is:"<<sq1.SquareArea()<<endl;


}
