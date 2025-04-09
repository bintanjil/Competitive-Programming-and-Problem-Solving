#include<iostream>
#include<string.h>
using namespace std;

char name[40] = "Tanjil Bin Mohiuddin";
char   id[20]  = "22-46721-1";
char section[20] = "B-14";


int main()
{

for(int i=0; i<40; i++)
{
cout<<name[i];
}
cout<<endl;
for(int i=0; i<20; i++)
{
cout<<id[i];
}
cout<<endl;

cout<<strcat(name,id)<<endl;

cout<<sizeof(id)<<" Bytes"<<endl;

if(strcmp(name, id)==0)
{
cout<<"the strings are equal"<<endl;
}
else
{
cout<<"the strings are not equal"<<endl;
}
strcpy(id,name);
//cout<<endl;
cout<<id<<endl;



return 0;
}
