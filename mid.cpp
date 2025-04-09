#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the number of innings that Tamim played"<<endl;
    cin>>n;
    int innings[n];int totalRuns=0;
    cout<<"Enter the runs:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>innings[i];
        totalRuns=totalRuns+innings[i];
    }
    cout<<"Total runs of Tamim in"<<" "<<n<<" "<<"matches="<<totalRuns<<endl;
   float avg;
   avg=(float) totalRuns/n;
   cout<<"Tamim's average:"<<avg;





























}
