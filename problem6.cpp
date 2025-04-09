#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string S;
        cin>>S;
        string firstHalf,lastHalf;
        int l=S.length();
        for(int i=0;i<l/2;i++)
        {
            firstHalf+=S[i];
            lastHalf+=S[l-i-1];
        }
            sort(firstHalf.begin(), firstHalf.end());
            sort(lastHalf.begin(), lastHalf.end());
            if(firstHalf == lastHalf)
            {
                cout<<"YES"<<endl;
            }
            else
                {
                cout<<"NO"<<endl;
            }

        }

}


