#include<iostream>
#include<string.h>
using namespace std;



int main()
{
char name[40] = "Tanjil Bin Mohiuddin";
char   id[]  = "22-46721-1";
char section[20] = "B-14";


cout<<endl;
cout<<section<<endl;
cout<<endl;
cout<<strlen(name)<<endl;

cout<<sizeof(id)<<" Bytes"<<endl;

if(strcmp(name, id)==0)
{
cout<<"the strings are equal"<<endl;
}
else
{
cout<<"the strings are not equal"<<endl;
}
strcpy(id,section);
cout<<endl;
cout<<id<<endl;

cout<<strcat(name,id)<<endl;

return 0;
}

