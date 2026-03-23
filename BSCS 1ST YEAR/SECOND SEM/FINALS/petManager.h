#ifndef PETMANAGER_H
#define PETMANAGER_H
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class petManager{
private:
vector<Animal*> pets; //STORE PET USING POLYMORPHISM
public:

    petManager(){} //CONSTRUCTOR

    //FREE MEMORY
    ~petManager() {
        for (Animal* p : pets) {
            delete p;  
        }
        pets.clear();  
    }
    
    //LOAD PETS FROM FILE
    void loadFile() {
        ifstream file("saveFile.txt");
        if (!file) {
            cout << "No file found.\n";
            return;
        }

        pets.clear();
        string line;

        while (getline(file, line)) {
            vector<string> tokens;
            size_t pos;

            while ((pos = line.find('|')) != string::npos) {
                tokens.push_back(line.substr(0, pos));
                line.erase(0, pos + 1);
            }
            tokens.push_back(line); 

            if (tokens.size() == 3) {
                string name = tokens[0];
                int id = stoi(tokens[1]);
                string type = tokens[2];

                if(type == "DOG"){
                    pets.push_back(new Dog(name, id));

                }
                else if(type == "CAT"){
                    pets.push_back(new Cat(name, id));

                }
                else{
                    pets.push_back(new Pet(name,id,type));
                }
            }
        }

        file.close();
    }

    //SAVE PET TO FILE 
    void saveFile(string name, int id, string type) {
        ofstream file("saveFile.txt", ios::app);
        if(type == "DOG"){
            pets.push_back(new Dog(name, id));

            }
            else if(type == "CAT"){
                pets.push_back(new Cat(name, id));

            }
            else{
                pets.push_back(new Pet(name,id,type));
            }
            
        file << name << "|" << id << "|" << type << endl;
        file.close();
            
    }

    //REWRITE ENTIRE FILE
    void rewriteFile() {
        
        ofstream file("saveFile.txt",ios::trunc);

        if (!file.is_open()) {
            cout << "Error opening the file for writing!" << endl;
            return;
        }

        for (Animal*p : pets) {
            file << p->getName() << "|" << p->getID() << "|" << p->getType() << endl;
        }
        file.close();
        cout << "File updated successfully!" << endl;   
    }


    //CHECK DUPLICATE ID
    bool isDuplicateID(int id){
        for(Animal* p: pets){
            if(p->getID() == id){
                return true;
            }
        }
        return false;
    }


    //VALIDATION NAME NO EMPTY NO NUMBERS
    bool isValidateName(string name){
        if(name.empty()){
            cout<<"Name cannot be Empty."<<endl;
            return false;
        }

        for (char c : name) {
        if (c >= '0' && c <= '9') {
            cout<<"Name cannot Contain numbers"<<endl;
            return false;
        }

    }
    return true;
    }


    //ADD NEW PET
    void addPet(){
        string name, type;
        int id, choiceType;
        cout<<"Enter Pet Name: ";
        cin.ignore(9999, '\n');
        getline(cin,name);

        while (!isValidateName(name)) {
            cout << "Enter Pet Name: ";
            getline(cin, name);
            
        }

        while(true){
            cout<<"Enter Pet ID: ";
            cin>>id;

            if (id >= 1000 && id <= 9999) {
            
            if (!isDuplicateID(id)) {
                break;
            } else {
                cout << "ID already exists. Try again."<<endl;
            }
            } else {
                cout << "ID must be a 4-digit number. Try again."<<endl;
            }
        }
              
        cout<<"=== Here's The Available Pet ==="<<endl;
        cout<<"[1]. DOG"<<endl;
        cout<<"[2]. CAT"<<endl;
        cout<<"[3]. HAMSTER"<<endl;
        cout<<"[4]. FISH"<<endl;
        cout<<"[5]. BIRD"<<endl;
        cout<<"Choose One: ";
        cin>>choiceType;

        switch(choiceType){
            case 1: type = "DOG";break;
            case 2: type = "CAT";break;
            case 3: type = "HAMSTER";break;
            case 4: type = "FISH";break;
            case 5: type = "BIRD";break;
            default: cout<<"Invalid Input."<<endl; return;;
        }
        
        saveFile(name,id,type);
        cout<<"Pet saved Successfully!"<<endl;
        rewriteFile();
    }


    //VIEW ALL PET
    void viewPets(){
        if(pets.empty()){
            cout<<"No pets Available."<<endl;

        }else{
            for(Animal* p: pets){
                p->showInfo();
            }
        }
    }

    //EDIT PET INFO
    void editPet(){
        if(pets.empty()){
            cout<<"No pets Available."<<endl;
        }else{
        string name,type;
        int updatePet,choice,choiceType;
        bool found = false;

        cout<<"Enter ID Number you want to Update: ";
        cin>>updatePet;

        for(int i = 0; i < pets.size(); i++){
            if(pets[i]->getID() == updatePet){
            cout<<"==== UPDATE PET ===="<<endl;
            cout<<"[1]. Edit Name "<<endl;
            cout<<"[2]. Change Pet Type "<<endl;
            cout<<"Choose one: ";
            cin>>choice;
            cin.ignore(9999,'\n');

            switch(choice){
                case 1:
                    do {
                        cout << "Enter New Pet Name: ";
                        getline(cin, name);
                    } while (!isValidateName(name));
                    pets[i]->setName(name);
                    break;
                case 2:
                    cout<<"=== Here's The Available Pet ==="<<endl;
                    cout<<"[1]. DOG"<<endl;
                    cout<<"[2]. CAT"<<endl;
                    cout<<"[3]. HAMSTER"<<endl;
                    cout<<"[4]. FISH"<<endl;
                    cout<<"[5]. BIRD"<<endl;
                    cout<<"Choose One: ";
                    cin>>choiceType;

                    switch(choiceType){
                        case 1: type = "DOG";break;
                        case 2: type = "CAT";break;
                        case 3: type = "HAMSTER";break;
                        case 4: type = "FISH";break;
                        case 5: type = "BIRD";break;
                        default: cout<<"Invalid Input."<<endl; return;
                    }
                    pets[i]->setType(type);
                    break;
                
                default:
                    cout<<"Invalid Input."<<endl;
                    return;
                        }
            
            
            found = true;
            break;
            }
        }

        if(found){
            rewriteFile();
            cout<<"Pet Updated Successfully!"<<endl;
        }
        else{
            cout<<"Pet not Found."<<endl;
        }
    }
    }
    
    //ADOPT PET
    void adoptPet(){
        if(pets.empty()){
            cout<<"No pets Available."<<endl;
        }else{
        int deletePet;
        bool found = false;
        cout<<"Enter ID you want to Adopt: ";
        cin>>deletePet;


        for(int i = 0; i < pets.size(); i++){
            if(pets[i]->getID() == deletePet){
                delete pets[i];
                pets.erase(pets.begin() + i);
                found = true;
                break;
            }
        }

        if(found){
            rewriteFile();
            cout<<"Pet Adopted/Sold Successfully!"<<endl;
        }
        else{
            cout<<"Pet not Found."<<endl;
        }
    }

    }


};


#endif
