#include <iostream>
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
class Rectangle
{
protected:
float base;
float height;
public:
Rectangle()
{
cout<<"Empty consturctor for rectangle"<<endl;
}
Rectangle(float B,float h)
{
base=B;
height=h;
cout<<"Parameterized for rectangle"<<endl;
}
float RecArea()
{
return base*height;
}
~Rectangle()
{
  cout<<"Destructor is called for rectangle"<<endl;
}



};
class Square : public Shape, public Rectangle
{
public:
Square()
{
cout<<"Empty consturctor for square"<<endl;
}
Square(float l):Shape(l)
{
cout<<"Parameterized called for square"<<endl;
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
    Shape sh;
    Shape s1(4.8);
    s1.showdetails();
    Rectangle r;
    Rectangle r1(4.5,3.9);
   cout<<"The area of rectangle is:"<<r1.RecArea()<<endl;
   Square sq;
   Square sq1(7.6);
   cout<<"The area of square is:"<<sq1.SquareArea()<<endl;



}












