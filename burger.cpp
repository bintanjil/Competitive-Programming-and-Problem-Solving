#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b,p,f,h,c;
        cin>>b>>p>>f>>h>>c;
        int numOfch,numOfb,leftbun,profit;
        if(b>1)
        {
            if(c>h)
        {
            numOfch=b/f;
            leftbun=b -(f*2);
            numOfb=leftbun/p;

            profit=(h*numOfb)+(c*numOfch);


        }
        else if(h>c)
        {
            numOfb=b/p;
            leftbun=b-(p*2);
            numOfch=leftbun/f;
            profit=profit=(h*numOfb)+(c*numOfch);
        }

        }
        else{ profit=0;}
        cout<<profit<<endl;

    }
}
