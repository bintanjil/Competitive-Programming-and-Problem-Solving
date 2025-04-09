#include <iostream>
using namespace std;

int main()
{
    int i,sum=0 ;

    for(i=1; i<=8;i++){

        sum=sum+i;
        cout<<"The sum till "<<i<<" number position is:"<<sum<<endl;

    }
    //cout<<"the sum "<<i-1<<" number position is "<<sum<<endl;



    cout<<"for while loop"<<endl;

    int x=1,sum2=0;
    while(x<=8)
    {

        sum2=sum2+x;

        x++;

        cout<<"The sum till "<<x<<" number position is:"<<sum2<<endl;
    }

     cout<<"for showing like 1+2+3+4..."<<endl;

     int num,sumN=0;

     cout<<"Enter any number for check:";
     cin>>num;
     int y;
     for(y=1;y<=num;y++)
     {
         sumN=sumN+y;
         cout<<y;
         if (y<num)
            cout<<"+";
         else
            cout<<"";
     }
     cout<<"="<<sumN<<endl;


     cout<<"do while loop"<<endl;

     int z=1, sumDW=0;


     do{
        sumDW=sumDW+z;
        z++;
        cout<<"The sum till"<<z-1<< "number position is:"<<sumDW<<endl;


     }while(z<=8);





















    return 0;




}
