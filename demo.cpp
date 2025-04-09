#include <iostream>
#include <string.h>
using namespace std;
int main (){

char name[30]="Tanjil";
char id[]="22-46721-1";
char name1[30]="Tanjil";
cout<<name<<endl;
cout<<strlen(name)<<endl;
cout<<strcpy(name1,id)<<endl;
cout<<strcat(name,id)<<endl;
cout<<sizeof(id)<<"Bytes"<<endl;

if (strcmp(name,name1)==0)
{
    cout<<"strings are equal!"<<endl;
}
else{
    cout<<"strings are not equal!"<<endl;
}

























}

