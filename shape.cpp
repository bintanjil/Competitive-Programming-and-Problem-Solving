#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

//#define endl "\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
ll gcd(ll a,ll b) {return __gcd(a,b);}
ll lcm(ll a, ll b) {return (a*(b/gcd(a,b)));}


class Shape {
protected:
    string shapeType;
    double area;

public:
    Shape(string type = "Generic", double a = 0) : shapeType(type), area(a) {}

    void setShapeType(std::string type) { shapeType = type; }
    string getShapeType() const { return shapeType; }

    void setArea(double a) { area = a; }
    double getArea() const { return area; }

    virtual void calculateArea() = 0;

    virtual void printInfo() const {
        cout << "Shape Type: " << shapeType << ", Area: " << area << endl;
    }
    virtual void readFromFile(ifstream& inputFile) = 0;

    virtual void writeToFile(ofstream& outputFile) const = 0;
};

class Circle : public Shape {
private:int main()
{
optimize();


}
    double radius;

public:
    Circle(double r = 0) : Shape("Circle"), radius(r) {}

    void calculateArea() override {
        area = 3.14159 * radius * radius;
    }

    void readFromFile(ifstream& inputFile) override {
        inputFile >> radius;
    }


    void writeToFile(ofstream& outputFile) const override {
        outputFile << "Circle " << radius << endl;
    }
};


class Square : public Shape {
private:
    double sideLength;

public:
    Square(double s = 0) : Shape("Square"), sideLength(s) {}


    void calculateArea() override {
        area = sideLength * sideLength;
    }

    void readFromFile(ifstream& inputFile) override {
        inputFile >> sideLength;
    }


    void writeToFile(ofstream& outputFile) const override {
        outputFile << "Square " << sideLength << endl;
    }
};

int main() {
    optimize();
    Circle circle(5);
    Square square(4);


    circle.calculateArea();
    square.calculateArea();


   cout << "Circle Area: " << circle.getArea() << endl;
   cout << "Square Area: " << square.getArea() << endl;


    ifstream inputFile("shapes.txt");
    ofstream outputFile("output.txt");

    if (inputFile.is_open() && outputFile.is_open()) {

        circle.readFromFile(inputFile);
        square.readFromFile(inputFile);


        circle.printInfo();
        square.printInfo();

        circle.writeToFile(outputFile);
        square.writeToFile(outputFile);

        cout << "Data written to file 'output.txt'" << endl;
    } else {
        cout << "Error opening files." << endl;
    }


    inputFile.close();
    outputFile.close();

    return 0;
}

