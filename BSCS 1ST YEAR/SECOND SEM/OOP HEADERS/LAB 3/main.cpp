
#include <iostream>
#include <math.h>
#include "Element.h"
#include "Electric.h"
#include "Water.h"
#include "Dark.h"
#include "Ice.h"
#include "Fire.h"

using namespace std;

int main() {

	int choice;
	double atk;

	Element* element1[5];

	element1[0] = new Electric();
	element1[1] = new Water();
	element1[2] = new Dark();
	element1[3] = new Ice();
	element1[4] = new Fire();



	while (true) {

		cout << "Welcome to Element ni Jp" << endl;
		cout << "[1]. Electric" << endl;
		cout << "[2]. Water" << endl;
		cout << "[3]. Dark" << endl;
		cout << "[4]. Ice" << endl;
		cout << "[5]. Fire" << endl;
		cout << "Choose one: ";
		cin >> choice;


		if (choice < 1 || choice > 5) {
			cout << "Invalid intput please try again." << endl;
			continue;
		}

		while (true) {
			cout << "How many attack do you want: ";
			cin >> atk;  


			if (atk < 1 || atk  > 100) {
				cout << "Attack must be 1.00 - 100.00" << endl;
				continue;
			}
			element1[choice - 1]->attack();
			element1[choice - 1]->attack(atk);
			break;
		}
		break;
	}
	

	return 0;
}
