#include <iostream>
using namespace std;
void autoStatic()
{
    int auto autoVar=1;
    int static statiVar=1;
    cout<<"auto:"<<autoVar<<endl;
     cout<<"static:"<<statiVar<<endl;
      statiVar=10;
      autoVar=10;
}
int main()
{
    for(int i=0;i<4;i++)
    {
        autoStatic();
    }
}
