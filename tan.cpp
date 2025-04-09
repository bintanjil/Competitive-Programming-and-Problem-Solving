#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
ll gcd(ll a,ll b) {return __gcd(a,b);}
ll lcm(ll a, ll b) {return (a*(b/gcd(a,b)));}
bool isPalindrome(string s){ll i=0,j=s.size()-1;for(i,j;i<=j;i++,j--){if(s[i]!=s[j]) return 0;}return 1;}
bool isPowerofTwo(ll n){return (n && !(n&(n-1)));}

class Room {
protected:
    string type;
    double area;

public:
    Room() {}
    Room(const string& t) : type(t) {}
    virtual ~Room() {}


    void setType(const string& t) { type = t; }
    string getType() const { return type; }

    void setArea(double a) { area = a; }
    double getArea() const { return area; }


    virtual void calculateArea() = 0;
    virtual void readFromFile(const string& filename) = 0;
    virtual void writeToFile(const string& filename) = 0;


    void printInfo() const {
        cout << "Room Type: " << type << endl;
        cout << "Area: " << area << " units" << endl;
    }
};

class Bedroom : public Room {
private:
    double length;
    double width;

public:
    Bedroom(double l, double w) : length(l), width(w) {
        type = "Bedroom";
        calculateArea();
    }

    void calculateArea() override {
        area = length * width;
    }

    void readFromFile(const string& filename) override {

        ifstream file(filename);
        if (file.is_open()) {
            file >> length >> width;
            file.close();
        }
    }

    void writeToFile(const string& filename) override {

        ofstream file(filename);
        if (file.is_open()) {
            file << length << " " << width << endl;
            file.close();
        }
    }
};

class LivingRoom : public Room {
private:
    double side1;
    double side2;

public:
    LivingRoom(double s1, double s2) : side1(s1), side2(s2) {
        type = "Living Room";
        calculateArea();
    }

    void calculateArea() override {
        area = side1 * side2;
    }

    void readFromFile(const string& filename) override {

        ifstream file(filename);
        if (file.is_open()) {
            file >> side1 >> side2;
            file.close();
        }
    }

    void writeToFile(const string& filename) override {

        ofstream file(filename);
        if (file.is_open()) {
            file << side1 << " " << side2 << endl;
            file.close();
        }
    }
};

class DiningRoom : public Room {
private:
    double length;
    double width;

public:
    DiningRoom(double l, double w) : length(l), width(w) {
        type = "Dining Room";
        calculateArea();
    }

    void calculateArea() override {
        area = length * width;
    }

    void readFromFile(const string& filename) override {

        ifstream file(filename);
        if (file.is_open()) {
            file >> length >> width;
            file.close();
        }
    }

    void writeToFile(const string& filename) override {

        ofstream file(filename);
        if (file.is_open()) {
            file << length << " " << width << endl;
            file.close();
        }
    }
};








int main()
{
optimize();
Bedroom b1(10.0, 12.0);
    b1.printInfo();
    b1.writeToFile("bedroom.txt");

    LivingRoom l1(15.0, 20.0);
    l1.printInfo();
    l1.writeToFile("livingroom.txt");
    DiningRoom d1(8.0, 10.0);
    d1.printInfo();
    d1.writeToFile("diningroom.txt");

    return 0;

}
