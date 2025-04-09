#include<bits/stdc++.h>
#define end     "/n"
using namespace std;
int main()
{
    int T,X,S,C,N;
    cin>>T;
    N=0;
    for (int i=0;i<T;i++)
    {
       cin>>X;
       S=X/3;
       C=(S+1)*3;
       if((X!=0) &&  (X%3!=0))
       {

           N=C-X;
       }
       else{N==0;}



       cout<<N<<endl;

    }
}
