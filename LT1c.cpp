#include <iostream>
using namespace std;

int main ()

{
char ch;
cout<<"Please choose a character"<<endl;
cin>>ch;

 switch (ch)

{
case 'Y':
cout<<"Yes" <<endl;
break;
case 'N':
cout<<"No" <<endl;
break;
case 'M':
    cout<<"May be"<<endl;
    break;
default:
cout<<"The character is invalid"<<endl;
}

 return 0;

}
