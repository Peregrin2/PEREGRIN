#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal{ //BASE CLASS
private:
string name;
int id;
string type;

public:
//CONSTRUCTOR
Animal(string name, int id, string type): name(name), id(id), type(type) {}


//SETTER
void setType(string t){
    type = t;
}

void setName(string n){
    name = n;
}

void setID(int i){
    id = i;
}

//GETTER
string getType(){   
    return type;
}

string getName(){
    return name;
}

int getID(){
    return id;
}

virtual void showInfo() = 0;    //PURE VIRTUAL FUNCTION
};

#endif
