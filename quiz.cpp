#include <iostream>
using namespace std;
void auto_static()
{
    int autoVar=1;
    int static staticVar=1;
    cout<<"auto:"<<autoVar<<endl;
    cout<<"static:"<<staticVar<<endl;
    ++autoVar;
    ++staticVar;

}



int main()
{
    for(int i=0;i<4;i++){
        auto_static();
    }
}
