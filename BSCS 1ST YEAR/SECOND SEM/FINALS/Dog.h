#ifndef DOG_H
#define DOG_H
#include <iostream>
using namespace std;

#include "Pet.h"


class Dog : public Pet { //DERIVED CLASS FROM PET
public:

    // CONSTRUCTOR (sets type automatically to "DOG")
    Dog(string name, int id) : Pet(name, id,"DOG") {}

    //OVERRIDE SHOWINFO FUNCTION
    void showInfo() override {

        Pet::showInfo();//CALL SHOWINFO
        
    }
};
#endif
