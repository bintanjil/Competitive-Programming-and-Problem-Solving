#include <iostream>
using namespace std;


int main()
{

    int examMark;
    cout<<"Enter your exam mark :";
    cin>>examMark;

    if (examMark>=80)
    {
        cout<<"Congratullation!"<<endl<<"You have got A+ "<<endl;
    }
     else if (examMark<40)
    {
        cout<<"Sorry"<<endl<<"You are failled"<<endl;
    }
    else
    {
        cout<<"You haven't got A+"<<endl;
    }





    return 0;

}
