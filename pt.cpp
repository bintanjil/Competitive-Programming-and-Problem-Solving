#include<iostream>
using namespace std;



int main()
{
int number = 10;
cout<<"The variables value is: "<<number<<endl;



int *pt = &number; // pt is a variable which is pointer variable
cout<<"Location of number variable is:"<<pt<<endl;
cout<<"Location of number variable is:"<<&number<<endl;
cout<<"The value in variable number is: "<<*pt<<endl;



//null pointer
/*int *pt2 = NULL;
cout<<"The value in variable number is: "<<*pt2<<endl;
cout<<"Location of number variable is:"<<pt2<<endl;*/



//pointer of pointer



int **pt3 = &pt;
cout<<"The location of pt is : the value in pt3 : "<<pt3<<endl;
cout<<"The location of pt is :"<<&pt<<endl;
cout<<"The value in pt :"<<*pt3<<endl;
cout<<"The value in **pt3 : or value of n assigned"<<**pt3<<endl;








}
