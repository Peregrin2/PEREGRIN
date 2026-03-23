#ifndef PET_H
#define PET_H
#include "Animal.h"
#include <iostream>
using namespace std;


class Pet: public Animal{       //DERIVED CLASS FROM ANIMAL
public:

//CONSTRUCTOR
Pet (string name, int id, string type) : Animal(name, id, type) {}


//OVERRIDE SHOWINFO FUNCTION
void showInfo() override{
    cout<<"====================="<<endl;
    cout<<"Name: "<<getName()<<endl;
    cout<<"ID: "<<getID()<<endl;
    cout<<"Type: "<<getType()<<endl;
    cout<<"====================="<<endl<<endl;
}


};

#endif
