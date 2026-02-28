#include <iostream>
using namespace std;

class Tools {
public: 
	virtual void pickaxe() {
		cout << "This is PickAxe" << endl;
	}

	virtual void pickaxe(int qty) { 
		cout << "Created " << qty << " pickaxes." << endl;
	}
};

class Wooden : public Tools {
public:

	void pickaxe() override {

		cout << "You have created a Wooden Picaxe" << endl;
	}
	void pickaxe(int qty) override  {
		cout << "You created "<<qty<<" times " << endl;
	
	}

};

class Stone : public Tools {
public:

	void pickaxe() override {

		cout << "You have created a Stone Picaxe" << endl;
	}
	 void pickaxe(int qty) override {
		cout << "You created " << qty << " times " << endl;

	}
};

class Gold : public Tools {
public:

	void pickaxe() override {

		cout << "You have created a Gold Picaxe" << endl;

	}
	 void pickaxe(int qty) override {
		cout << "You created " << qty << " times " << endl;
	
	}
};

class Diamond : public Tools {
public:

	void pickaxe() override {

		cout << "You have created a Diamond Picaxe" << endl;
	}
	 void pickaxe(int qty) override {

		cout << "You created " << qty << " times " << endl;


	}

};

class Netherite : public Tools {
public:

	void pickaxe() override {

		cout << "You have created a Netherite Picaxe" << endl;

	}

	 void pickaxe(int qty) override {

		cout << "You created " << qty << " times " << endl;

	}

};


int main() {
	int choice;
	int qty;

	Tools* tool1[5];

	tool1[0] = new Wooden();
	tool1[1] = new Stone();
	tool1[2] = new Gold();
	tool1[3] = new Diamond();
	tool1[4] = new Netherite();
	

	while (true) {

		cout << "Welcome to the PickAxe Factory!" << endl;
		cout << "[1]. Wooden PickAxe" << endl;
		cout << "[2]. Stone PickAxe" << endl;
		cout << "[3]. Gold PickAxe" << endl;
		cout << "[4]. Diamond PickAxe" << endl;
		cout << "[5]. Netherite PickAxe" << endl;
		cout << "Choose one: ";
		cin >> choice;

		if(choice < 1 || choice > 5) {
			cout << "Invalid choice. Please try again." << endl;
			continue;
		}
		while (true) {
			cout << "How many pickaxes do you want to create? ";
			cin >> qty;
			if (qty < 1 || qty > 64) {
				cout << "Invalid quantity. Please enter a positive number." << endl;
				continue;
			}
			cout << "====================================" << endl;
				tool1[choice - 1]->pickaxe();
				tool1[choice - 1]->pickaxe(qty);
			cout << "====================================" << endl;
				break;

		}
		break;
	}
		return 0;
	
}
