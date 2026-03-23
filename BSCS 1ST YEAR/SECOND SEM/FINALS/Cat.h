#ifndef CAT_H
#define CAT_H
#include <iostream>
using namespace std;

#include "Pet.h"

class Cat : public Pet {//DERIVED CLASS FROM PET
public:
    // CONSTRUCTOR (sets type automatically to "CAT")
    Cat(string name, int id) : Pet( name, id, "CAT") {}

    //OVERRIDE SHOWINFO FUNCTION
    void showInfo() override {

        Pet::showInfo();//CALL SHOWINFO

    }
};

#endif
