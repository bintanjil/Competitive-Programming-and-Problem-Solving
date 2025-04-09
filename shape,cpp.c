#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
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

    // Getters and Setters
    void setShapeType(std::string type) { shapeType = type; }
    string getShapeType() const { return shapeType; }

    void setArea(double a) { area = a; }
    double getArea() const { return area; }

    // Abstract method for area calculation
    virtual void calculateArea() = 0;

    // Print information
    virtual void printInfo() const {
        std::cout << "Shape Type: " << shapeType << ", Area: " << area << std::endl;
    }

    // Read data from file
    virtual void readFromFile(std::ifstream& inputFile) = 0;

    // Write data to file
    virtual void writeToFile(std::ofstream& outputFile) const = 0;
};

// Circle class inheriting from Shape
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r = 0) : Shape("Circle"), radius(r) {}

    // Override area calculation for a circle
    void calculateArea() override {
        area = 3.14159 * radius * radius;
    }

    // Read circle data from file
    void readFromFile(std::ifstream& inputFile) override {
        inputFile >> radius;
    }

    // Write circle data to file
    void writeToFile(std::ofstream& outputFile) const override {
        outputFile << "Circle " << radius << std::endl;
    }
};

// Square class inheriting from Shape
class Square : public Shape {
private:
    double sideLength;

public:
    Square(double s = 0) : Shape("Square"), sideLength(s) {}

    // Override area calculation for a square
    void calculateArea() override {
        area = sideLength * sideLength;
    }

    // Read square data from file
    void readFromFile(std::ifstream& inputFile) override {
        inputFile >> sideLength;
    }

    // Write square data to file
    void writeToFile(std::ofstream& outputFile) const override {
        outputFile << "Square " << sideLength << std::endl;
    }
};

int main() {
    // Creating Circle and Square instances
    Circle circle(5);
    Square square(4);

    // Calculating areas
    circle.calculateArea();
    square.calculateArea();

    // Verifying calculated areas
    std::cout << "Circle Area: " << circle.getArea() << std::endl;
    std::cout << "Square Area: " << square.getArea() << std::endl;

    // File IO
    std::ifstream inputFile("shapes.txt");
    std::ofstream outputFile("output.txt");

    if (inputFile.is_open() && outputFile.is_open()) {
        // Read data from file
        circle.readFromFile(inputFile);
        square.readFromFile(inputFile);

        // Print loaded data
        circle.printInfo();
        square.printInfo();

        // Write data to file
        circle.writeToFile(outputFile);
        square.writeToFile(outputFile);

        std::cout << "Data written to file 'output.txt'" << std::endl;
    } else {
        std::cout << "Error opening files." << std::endl;
    }

    // Close file streams
    inputFile.close();
    outputFile.close();

    return 0;
}

