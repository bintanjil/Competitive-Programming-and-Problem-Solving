#include <iostream>
using namespace std;
int main ()
{


    int innings[10];int totalRuns=0;
    cout<<"Enter the runs of Shakib Al Hasan of last 10 ODI matches:"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>innings[i];
        totalRuns=totalRuns+innings[i];
    }
    cout<<"Total runs of Shakib Al Hasan is:"<<totalRuns<<endl;
   float avg;
   avg=(float) totalRuns/10;
   cout<<"Shakib's average:"<<avg<<endl;


   cout<<"For checking if the total runs of Shakib is even or odd"<<endl;
   if(totalRuns%2==0)
   {
       cout<<"It's an Even number";
   }
   else
   {
       cout<<"It's an Odd number";
   }


  return 0;
}

