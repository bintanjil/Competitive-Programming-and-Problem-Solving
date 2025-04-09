#include <iostream>
using namespace std;
int main ()
{

    int examMark;
    cout<<"Enter your exam mark:"<<endl;
    cin>>examMark;

    if(examMark>32){
        if(examMark>=80){

            cout<<"A+";
        }
        else if (examMark>=70){
            cout<<"A";
        }
        else if (examMark>=65)

        {
            cout<<"A-";
        }
        else if (examMark>=60){
            cout<<"B";
        }
        else if (examMark>=50)
        {
            cout<<"C";
        }
        else if (examMark>=33)
        {
            cout<<"D";
        }

    }
    else {
        cout<<"Fail";

    }
    return 0;



}
