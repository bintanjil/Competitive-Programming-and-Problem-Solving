#include <iostream>
using namespace std;


class Square
{
private:
    int Num;
public:
    void getValue()
    {
        cout<<"Enter the number:";
        cin>>Num;

    }
    void display()
    {
        cout<<"Square is:"<<Num*Num<<endl;
    }
};


int main()
{
    Square obj;
    obj.getValue();
    obj.display();

}
