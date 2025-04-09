#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
optimize();
int t;
cin>>t;
while(t--)
{
    int subs,on,n;
    cin>>subs>>on>>n;
    int plus_cnt=0;
    int neg_cnt=0;
    char noti[n];
    for(int i=0;i<n;i++)
    {
        cin>>noti[i];
        if(noti[i]=='+')
        {plus_cnt++;}

        else if(noti[i]=='-')
        {
            neg_cnt++;
        }

    }
    if((on+plus_cnt)<subs)
    {
        cout<<"NO"<<endl;
    }
    else if((subs-on)==plus_cnt==neg_cnt)
    {
        cout<<"MAYBE"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}


}
