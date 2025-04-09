#include <iostream>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A;
     cin>>B;
      cin>>C;
    if(A<B&& B<C)
    {
        cout<<B;
    }
    else if(A>B && A<C)
    {
        cout<<A;
    }

    else{
        cout<<C;
    }

}
