#include<iostream>
#include<cstring>
using namespace std;
class Marvel{
protected:
    string superHeroes;
    string living;
public:
    Marvel(){
        cout<<"This is empty for Marvel"<<endl;}
    Marvel(string superHeroes,string living){
        this->superHeroes=superHeroes;
        this->living=living;
        cout<<"This is Parametarized for Marvel"<<endl;}
    virtual void display(){}
};
class Alfeim:public Marvel{
protected:
    long Elves;
public:
    Alfeim(){
        cout<<"Empty constructor for Alfeim"<<endl;
        }
    Alfeim(string superHeroes, string living, string leader):Marvel(superHeroes,living){
        this->leader=leader;
        cout<<"This is Parameterized for Alfeim"<<endl;}
    void display(){
        cout<<"Super Heroes in Alfeim: "<<superHeroes<<endl;
        cout<<"Citizens of the Alfeim:"<<living<<endl;
        cout<<"Leader of Alfeim: "<<leader<<endl;
        }
};
class Asgard:public Marvel{
protected:
    string king;
public:
    Asgard(){
        cout<<"This is Empty for Asgard"<<endl;}
    Asgard(string superHeroes,string living,string king):Marvel(superHeroes,living){
        this->king=king;
        cout<<"This is Parameterized for Asgard"<<endl;}
    void display(){
        cout<<"SuperHeroes in Asgard: "<<superHeroes<<endl;
        cout<<"Citizens of the Asgard: "<<living<<endl;
        cout<<"King of Asgard: "<<king<<endl;
        }
};
class Vanaheim:public Marvel{
protected:
    string queen;
public:
    Vanaheim(){
        cout<<"This is Empty for Vanaheim"<<endl;}
    Vanaheim(string superHeroes,string living, string queen):Marvel(superHeroes,living){
        this->queen=queen;
        cout<<"This is Parameterized for Vanaheim"<<endl;}
    void display(){
        cout<<"SuperHeroes in Vanaheim: "<<superHeroes<<endl;
        cout<<"Citizens of the Vanaheim: "<<living<<endl;
        cout<<"Queen of Vanaheim: "<<queen<<endl;
        }
};
class Nidavilleir:public Marvel{
protected:
    string chief;
public:
    Nidavilleir(){
        cout<<"This is Empty for Nidavilleir"<<endl;}
    Nidavilleir(string superHeroes, string living, string chief):Marvel(superHeroes,living){
        this->chief=chief;
        cout<<"This is Parameterized for Nidavilleir"<<endl;}
    void display(){
        cout<<"SuperHeroes in Nidavilleir: "<<superHeroes<<endl;
        cout<<"Citizens of the Nidavilleir: "<<living<<endl;
        cout<<"Chief of Nidavilleir: "<<chief<<endl;
        }
};
class DC{
protected:
    string SuperHeroes;
public:
    DC(){
        cout<<"This is Empty for DC"<<endl;}
    DC(string SuperHeroes){
        this->SuperHeroes=SuperHeroes;
        cout<<"This is Parameterized for DC"<<endl;}
    void display(){}
};
class Earth:public Marvel,public DC{
protected:
    string people;
    string superHeroTeam;
public:
    Earth(){
        cout<<"This is Empty for Earth"<<endl;}
    Earth(string superHeroes,string living, string people):Marvel(superHeroes,living),DC(SuperHeroes){
        this->people=people;
        cout<<"This is Parameterized for Earth"<<endl;}
    void display(){
        cout<<"SuperHeroes on Earth: "<<superHeroes<<endl;}
    void Visualize_the_living(){
        cout<<"Citizens of Earth: "<<people<<endl;}
    string protecting_the_living(){
        return superHeroTeam;}
};

class Wakanda:public Earth{
protected:
    int tribe;
    string king;
public:
    Wakanda(){
        cout<<"This is Empty for Wakanda"<<endl;}

    void visualize_the_living(){
        cout<<"Wakanda have"<<tribe<<" tribes"<<endl; }



};
int main()
{

}
