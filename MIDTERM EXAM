#include <iostream>
using namespace std;

class Animal {
protected:
	string name;
	int age;
public:
	Animal(string name, int age) {
		this->name = name;
		this->age = age;
	}

	void AnimalDisplay() {
		cout << "Dog Name: " << name << endl;
		cout << "Age: " << age << endl << endl;
	}

};
		
class Owner {
private:
	string ownerName;

public:
	bool isVaccinated;

	Owner(string ownerName, bool isVaccinated) {
		this->ownerName = ownerName;
		this->isVaccinated = isVaccinated;

	}

	void OwnerDisplay() {
		cout << "Owner Name: " << ownerName << endl;
		if(isVaccinated == true){
			cout << "Vaccinated: Yes" << endl << endl;
		} else if(isVaccinated == false){
			cout << "Vaccinated: No" << endl << endl;
		}

	}
};

class Dog : public Animal, public Owner {
	private:
		string breed;
public:
	Dog(string name, int age, string ownerName, bool isVaccinated, string breed)
		:Animal(name, age), Owner(ownerName, isVaccinated) {
		this->breed = breed;
	}

	void DogDisplay() {
		
		AnimalDisplay();
		OwnerDisplay();
		
		cout << "Breed: " << breed << endl;
	}
};
int main() {

	Dog dog1("Jaira", 3, "Jaypee", false, "Golden Retriever");
	Dog dog2("budang", 3, "Jp", true, "Tiger");
	Dog dog3("Jaypee", 3, "Jaira", false, "Betlog");
	cout << "================ DOG 1 =================\n";
	dog1.DogDisplay();
	cout << "================ DOG 2 =================\n";
	dog2.DogDisplay();
	cout << "================ DOG 3 =================\n";
	dog3.DogDisplay();
	return 0;
}
