//STANDARD LIBRARIES
#include <iostream>
#include <string>
#include <fstream> 
#include <vector>

// CUSTOM HEADERS
#include "Animal.h"
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "petManager.h"

using namespace std;

int main(){
    petManager pets;        // Create petManager object
    pets.loadFile();        // load data from file
    
    int choice;

    while(true){

        cout<<"==== Welcome to Pet Manager ===="<<endl;
        cout<<"[1]. Add Pet"<<endl;
        cout<<"[2]. View All Pets"<<endl;
        cout<<"[3]. Update Pets"<<endl;
        cout<<"[4]. Adopt/Sell a Pet"<<endl;
        cout<<"[5]. Exit"<<endl;
        cout<<"Choose One: ";
        cin>>choice;

        switch(choice){
            case 1: 
                
                pets.addPet();      //add pet
                system("pause"); 
                system("cls");
            break;
            case 2:
                
                pets.viewPets();    //view all pet
                system("pause"); 
                system("cls");
            break;
            case 3: 
                
                pets.editPet();     //update pet
                system("pause"); 
                system("cls");
            break;
            case 4: 
                pets.adoptPet();    //adopt pet
                system("pause"); 
                system("cls");
            break;
            case 5: 
                cout<<"Exiting the program...."<<endl; 
                return 0; 
            break;
            default: cout<<"Invalid Input. "<<endl; break;
        }
    }
    
    
    return 0;
}
