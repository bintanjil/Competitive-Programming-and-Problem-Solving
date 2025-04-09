#include <iostream>
using namespace std;

class Marvel
{
protected:
    int  avengers;
    long livings;
public:
    Marvel()
    {
        cout<<"Empty constructor for marvel"<<endl;
    }
    Marvel(int A,long L)
    {
        avengers=A;
        livings=L;
        cout<<"Parameterized for marvel"<<endl;
        cout<<"The Number of avengers"<<"="<<avengers<<endl;
    }

};
class Asgard:public Marvel
{
protected:
    long Asgardians;
public:
    Asgard()
    {
        cout<<"Empty constructor for asgard"<<endl;
    }
    Asgard(long as,int a,long l):Marvel(a,l)
    {
        Asgardians=as;
        cout<<"Parameterized for asgard"<<endl;
    }

};
class Alfeim: public Marvel
{
protected:
    long Elves;
public:
    Alfeim()
    {
        cout<<"Empty for alfeim"<<endl;
    }
    Alfeim(long E,int a,long l):Marvel(a,l)
    {
        Elves=E;
        cout<<"Parameterized for alfeim"<<endl;
    }
};
class Nidavellir: Marvel
{
protected:
    long Dwarves;
public:
    Nidavellir(long d)
    {
        Dwarves=d;
        cout<<"Parameterized for nidavellir"<<endl;
    }

};
class Vanaheim: Marvel
{
protected:
    long Vanir;
public:
    Vanaheim()
    {
        cout<<"Empty for vanaheim"<<endl;
    }
    Vanaheim(long V)
    {
        Vanir=V;
        cout<<"Parameterized for vanaheim"<<endl;
    }

};
class DC
{
protected:
    long superHeros;
public:
    DC()
    {
        cout<<"Empty constructor for dc"<<endl;
    }
    DC(long SH)
    {
        superHeros=SH;
        cout<<"Parameterized for dc"<<endl;
        cout<<"The total number of superheroes"<<"="<<superHeros<<endl;
    }

};
class Earth : public Marvel,public DC
{
protected:
    long people;
public:
    int protecting_the_livings(int a)
    {

        return avengers;

    }
    void visualize_the_living()
    {
        cout<<"All the livings are being attacked"<<endl;

    }
};
class Wakanda : public Earth
{
protected:
    long tribe;
public:
    Wakanda()
    {
        cout<<"Empty constructor for wakanda"<<endl;
    }
    Wakanda(long T)
    {
        tribe=T;
        cout<<"Parameterized for wakanda"<<endl;
    }


};



int main()
{
    Marvel m;
    Marvel m1(15,5);
    Asgard ag;
    Asgard ag1(30,15,16000000);
    Alfeim al;
    Alfeim al1(2,15,1612632);
    Nidavellir nv1(11919191);
    Vanaheim vm;
    Vanaheim vm1(22616);
    DC dc;
    DC dc1(10000);
    Wakanda wk;
    Wakanda wk1(10101);





}
