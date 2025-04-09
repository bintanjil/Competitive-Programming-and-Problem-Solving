#include<iostream>
using namespace std;

int main()
{
    int array1 [4] = {10,20,14,11};
    cout<<"Please enter the position you want to search?"<<endl;
    int position;
    cin>>position;

    for(int index=0; index<4; index++)
    {
        if(index == position)
        {
          cout<<array1[index]<<endl;
        }
        else
        {
            continue;
        }
    }
    cout<<"please enter the value you want to search"<<endl;
    int input;
    cin>>input;

    for(int index=0; index<4; index++)
    {
        if(array1[index] == input)
        {
          cout<<input<<" found at: "<<index<<endl;
          break;
        }
        else
        {
            continue;
        }
    }

return 0;

}

